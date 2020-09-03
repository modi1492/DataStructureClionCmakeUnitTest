//
// Created by 陈孟迪 on 2020/9/3.
//
#include "util.h"
#include <cstdio>
void PrintElem(ElemType e) {
    printf("%d ", e);
}

// 判断data>e是否成立
Status CmpGreater(ElemType data, ElemType e) {
    return data > e ? TRUE : FALSE;
}

/*
 * 比较
 *
 * 比较e1和e2的大小，返回值含义如下：
 *  < 0：e1 < e2
 *  = 0：e1 = e2
 *  > 0：e1 > e2
 */
int Cmp(ElemType e1, ElemType e2) {
    return e1 - e2;
}