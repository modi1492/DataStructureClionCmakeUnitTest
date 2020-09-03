//
// Created by 陈孟迪 on 2020/9/3.
//

#ifndef GTEST_DEMO_LINKLISTUTIL_H
#define GTEST_DEMO_LINKLISTUTIL_H


#include <cstdio>
#include <cstdlib>      //提供malloc、realloc、free、exit原型
#include "basic/LinkList/LinkList.h"    //**▲02 线性表**//

/*
 * ████████ 算法2.12 ████████
 *
 * 非递减链表归并：C=A+B
 *
 * 将链表A和B归并为C，且保持元素相对位置不变。
 * Lc利用La的头结点，Lb中结点均插入新链表Lc中。
 */
void MergeList(LinkList* La, LinkList* Lb, LinkList* Lc);


#endif //GTEST_DEMO_LINKLISTUTIL_H
