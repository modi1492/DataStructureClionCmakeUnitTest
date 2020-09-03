#include "gtest/gtest.h"
#include "basic/LinkList/LinkList.h"
#include "basic/SqList/SqList.h"
#include "util/LinkListUtil.h"
#include <iostream>
using namespace std;



TEST(SqList, InitLinkList) {
    LinkList linkList;
    SqList sqList;
    Status i = InitList(&sqList);
    cout << i << endl;
    i = InitList(&linkList);
    cout << i << endl;
}

TEST(SqList, MergeLinkList) {
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

