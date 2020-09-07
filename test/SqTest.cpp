#include "gtest/gtest.h"
#include "SqList/SqList.h"
#include <iostream>
#include <util/SqListUtil.h>

using namespace std;

// 测试函数，打印元素
void PrintElem(ElemType e) {
    printf("%d ", e);
}

TEST(SqList, InitList) {
    SqList sqList;
    Status i = InitList(&sqList);
    cout << i << endl;
}

TEST(SqList, Union) {
    ElemType a[5] = {5, 2, 1, 3, 9};
    ElemType b[7] = {7, 2, 6, 9, 11, 3, 10};
    ElemType c[12] = {5, 2, 1, 3, 9, 7, 2, 6, 9, 11, 3, 10};
    SqList La, Lb;
    int i;

    // 初始化La
    InitList(&La);
    for (i = 1; i <= 5; i++) {
        ListInsert(&La, i, a[i - 1]);
    }

    // 初始化Lb
    InitList(&Lb);
    for (i = 1; i <= 7; i++) {
        ListInsert(&Lb, i, b[i - 1]);
    }

    // 输出La
    printf("La = ");
    ListTraverse(La, PrintElem);

    // 输出Lb
    printf("Lb = ");
    ListTraverse(Lb, PrintElem);

    // 输出新表La的内容
    printf("La = La∪Lb = ");
    Union(&La, Lb);
    ListTraverse(La, PrintElem);
    EXPECT_EQ(TRUE, equal(La, Lb));

}
