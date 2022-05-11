#include "clc/clc.h"
#include "aipu2.h"

__kernel void vadd(const __global char *input1, const __global char *input2, __global char *weight, __global char *output) {
  __local int8 w[4];  // SM for shared objects.
  int gid = get_global_id(0); 
  // only one PE which global id is 0 transfer weight to SM.
  if (gid == 0) {
    event_t event;
    // DMA, global DDR to SM.
    event = async_work_group_copy(w, (const __global int8 *)weight, 2, 0);
    wait_group_events(1, &event);
  }
  barrier(CLK_LOCAL_MEM_FENCE);

  __lsram int8 a[2];
  __lsram int8 b[2];
  __lsram int8 c[2];
  int tid =  get_local_id(0);
  for (int i = 0; i < 2; i++) {
    // global DDR to LM using DMA.
    event_t event_lsram_in[2];
    event_lsram_in[0] = async_work_group_copy(a, (const __global int8 *)input1 + (tid + i)*2, 2, 0);
    event_lsram_in[1] = async_work_group_copy(b, (const __global int8 *)input2 + (tid + i)*2, 2, 0);
    // sync.
    wait_group_events(2, event_lsram_in);
    for (int j = 0; j < 2; j++) {
      c[j] = a[j] + b[j] +  w[j];
    }
    // save output to global DDR.
    event_t event_lsram_out;
    event_lsram_out = async_work_group_copy((__global int8 *)output + (tid + i)*2, c, 2, 0);
    wait_group_events(1, &event_lsram_out);
  }
}