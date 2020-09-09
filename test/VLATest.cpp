#include "gtest/gtest.h"
#include <iostream>
#include <cpplearning/VLA.h>
#include "cpplearning/CSample.h"

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

TEST(CSample, CSampleT) {
    cout << "step1" << endl;
    CSample arrayl[2];
    cout << "step2" << endl;
    CSample array2[2] = {4, 5};
    cout << "step3" << endl;
    CSample array3[2] = {3};
    cout << "step4" << endl;
    CSample *array4 = new CSample[2];
    delete[] array4;
}

TEST(CTest, CTestT) {
    CTest arrayl [3] = { 1, CTest(1,2) };
    //三个元素分别用构造函数(2)、(2)、(1)初始化
    CTest array2[3] = { CTest(2,3), CTest(1,2), 1};
    //两个元素指向的对象分别用构造函数(1)、(2)初始化
    CTest* pArray[3] = { new CTest(4), new CTest(1,2) };
}



