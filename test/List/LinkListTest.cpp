#include "gtest/gtest.h"
#include "util/LinkListUtil.h"
#include "basic/List/LinkList/LinkList.h"
#include <iostream>

using namespace std;


TEST(LinkList, MergeLinkList) {
    LinkList La, Lb, Lc;

    int n = 5;

    printf("作为示例，La长度设定为 %d ，Lb长度设定为 %d ，创建La和Lb...\n", n, n);

    CreateList_Head(&La, n, "TestData_Head.txt");
    printf("La = ");
    ListTraverse(La, PrintElem);

    CreateList_Tail(&Lb, n, "TestData_Tail.txt");
    printf("Lb = ");
    ListTraverse(Lb, PrintElem);

    printf("归并La和Lb为Lc = ");
    MergeList(&La, &Lb, &Lc);
    ListTraverse(Lc, PrintElem);
}

