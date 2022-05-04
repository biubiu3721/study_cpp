#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode * next;
}LNode;

// 1.Init
LNode * InitList(LNode *L);
// 2. Destory
LNode * DestoryList(LNode *L);

// 3. Clear
void ClearList(LNode *L);
// 4. Length
int ListLength(LNode *L);
// 5. Get I 
LNode* GetEltm(LNode *L, int i, )