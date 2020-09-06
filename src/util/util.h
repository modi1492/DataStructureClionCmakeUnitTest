//
// Created by 陈孟迪 on 2020/9/3.
//

#ifndef GTEST_DEMO_UTIL_H
#define GTEST_DEMO_UTIL_H


#include <Status/Status.h>

typedef int ElemType;

/* 顺序栈元素类型定义 */
typedef int SElemType;

void PrintElem(ElemType e);

Status CmpGreater(ElemType data, ElemType e);

int Cmp(ElemType e1, ElemType e2);
#endif //GTEST_DEMO_UTIL_H
