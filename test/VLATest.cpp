#include "gtest/gtest.h"
#include <iostream>
#include <cpplearning/VLA.h>
using namespace std;

TEST(VLA, VLAT) {
//在栈上创建对象
    int n = 5;
//    cout << "Input array length: ";
//    cin >> n;
    VLA *parr = new VLA(n);
    //输入数组元素
    cout << "Input " << n << " numbers: ";
    parr->input();
    //输出数组元素
    cout << "Elements: ";
    parr->show();
    //删除数组（对象）
    delete parr;
}





