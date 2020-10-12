#include "gtest/gtest.h"
#include "basic/SqList/SqList.h"
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



char *str1 = "c.biancheng.net";  //字符串在常量区，str1在全局数据区
int n;  //全局数据区

char *func() {
    char *str = "C语言中文网";  //字符串在常量区，str在栈区
    return str;
}

TEST(SqList, LinuxMemory) {
    int a;  //栈区
    char *str2 = "01234";  //字符串在常量区，str2在栈区
    char arr[20] = "56789";  //字符串和arr都在栈区
    char *pstr = func();  //栈区
    int b;  //栈区

    printf("str1: %#X\npstr: %#X\nstr2: %#X\n", str1, pstr, str2);
    puts("--------------");
    printf("&str1: %#X\n   &n: %#X\n", &str1, &n);
    puts("--------------");
    printf("  &a: %#X\n arr: %#X\n  &b: %#X\n", &a, arr, &b);
    puts("--------------");
    printf("n: %d\na :%d\nb: %d\n", n, a, b);
    puts("--------------");
    printf("%s\n", pstr);
}