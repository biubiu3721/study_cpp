/**********************************************************************************
 * This file is CONFIDENTIAL and any use by you is subject to the terms of the
 * agreement between you and Arm China or the terms of the agreement between you
 * and the party authorised by Arm China to disclose this file to you.
 * The confidential and proprietary information contained in this file
 * may only be used by a person authorised under and to the extent permitted
 * by a subsisting licensing agreement from Arm China.
 *
 *        (C) Copyright 2022 Arm Technology (China) Co. Ltd.
 *                    All rights reserved.
 *
 * This entire notice must be reproduced on all copies of this file and copies of
 * this file may only be made by a person if such person is permitted to do so
 * under the terms of a subsisting license agreement from Arm China.
 *
 *********************************************************************************/
#include <aipu.h>

#define SIZE (512)

__entry void Abs(uint32_t data_size, uint32_t in_addr, uint32_t out_addr)
{
    //summury: abs int8 support range [-128, 127]
    #ifdef __UINT__
        __lsram0 v32uint8_t arr_v32b_input_l0[SIZE];
    #endif
    #ifdef __INT__
        __lsram0 v32int8_t arr_v32b_input_l0[SIZE];
        __lsram0 v32int8_t ones;
        __lsram0 v32int8_t zeros;
        __lsram0 v32int8_t mask;
        __lsram0 v32int8_t min;
        __lsram0 v32bool_t p1;
        __lsram0 v32bool_t p2;
        ones = __builtin_aipu_bcast_trb(1);
        zeros = __builtin_aipu_bcast_trb(0);
        min = __builtin_aipu_bcast_trb(-128);
        p1 = __builtin_aipu_mov_prb(0xffffffff);
    #endif

    uint32_t tec_num = __builtin_aipu_gettecnum();
    uint32_t lsram_size = SIZE * sizeof(v32int8_t) * tec_num;

    int32_t each_loop_size = __builtin_aipu_minu(data_size, lsram_size);
    int32_t remain_size = data_size;

    // calcu_num means how many times we need to calculate
    // each tec take 32B, so we have 5 + (tec_num >> 1)
    int32_t calcu_num = ((each_loop_size - 1) >> (5 + (tec_num >> 1))) + 1;

    while (remain_size > 0)
    {
        // for the last loop
        if (remain_size < each_loop_size)
        {
            each_loop_size = remain_size;
            calcu_num = ((each_loop_size - 1) >> (5 + (tec_num >> 1))) + 1;
        }
        __memcpy_ddr2lsram0(arr_v32b_input_l0, (uint8_t *)in_addr,
                            each_loop_size, NATIVE, REGION0);

        #ifdef __INT__
        for (int32_t j = 0; j < calcu_num; j++)
        {
            p2 = __builtin_aipu_clep_pttsb(arr_v32b_input_l0[j], min, p1);
            arr_v32b_input_l0[j] = __builtin_aipu_absp_ttb(arr_v32b_input_l0[j], p1);
            //mask = __builtin_aipu_addp_tttb(ones, zeros, p2);
            //arr_v32b_input_l0[j] = __builtin_aipu_add_tttb(mask, arr_v32b_input_l0[j]);
        }
        #endif
        __memcpy_lsram02ddr((uint8_t *)out_addr, arr_v32b_input_l0,
                            each_loop_size, NATIVE, REGION0);
        in_addr += each_loop_size;
        out_addr += each_loop_size;
        remain_size -= each_loop_size;
    }
}