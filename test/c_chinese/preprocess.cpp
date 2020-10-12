#include "gtest/gtest.h"
#include "basic/SqList/SqList.h"
#include <iostream>


using namespace std;

//不同的平台下引入不同的头文件
#if _WIN32  //识别windows平台
#include <windows.h>
#elif __linux__  //识别linux平台
#include <unistd.h>
#endif

#define CON1(a, b) a##e##b
#define CON2(a, b) a##b##00

TEST(PreProcess, PreProcess) {
    //不同的平台下调用不同的函数
#if _WIN32  //识别windows平台
    Sleep(5000);
#elif __linux__  //识别linux平台
    sleep(5);
#endif
    puts("http://c.biancheng.net/");

}

TEST(PreProcess, DoublePoundSign) {
    printf("%f\n", CON1(8.5, 2));
    printf("%d\n", CON2(12, 34));
    printf("%f\n", 8.5e2);
}

TEST(PreProcess, PreDefine) {
    printf("Date : %s\n", __DATE__);
    printf("Time : %s\n", __TIME__);
    printf("File : %s\n", __FILE__);
    printf("Line : %d\n", __LINE__);
    system("pause");
}

TEST(PreProcess, ConditionCompile) {
#if _WIN32
    system("color 0c");
        printf("WIN32 http://c.biancheng.net\n");
#elif __linux__
    printf("LINUX \033[22;31mhttp://c.biancheng.net\n\033[22;30m");
#else
    printf("OTHER http://c.biancheng.net\n");
#endif

}

TEST(PreProcess, ConditionCompile1) {
#ifdef _DEBUG
    printf("正在使用 Debug 模式编译程序...\n");
#else
    printf("正在使用 Release 模式编译程序...\n");
#endif
    system("pause");

}

#define NUM 10

TEST(PreProcess, ConditionCompile2) {
#if NUM == 10 || NUM == 20
    printf("NUM: %d\n", NUM);
#else
    printf("NUM Error\n");
#endif

}

#define NUM1 10
#define NUM2 20
TEST(PreProcess, ConditionCompile3) {
#if (defined NUM1 && defined NUM2)
    //代码A
    printf("NUM1: %d, NUM2: %d\n", NUM1, NUM2);
#else
    //代码B
        printf("Error\n");
#endif

}