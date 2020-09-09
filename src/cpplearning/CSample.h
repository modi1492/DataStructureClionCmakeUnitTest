//
// Created by 陈孟迪 on 2020/9/9.
//

#ifndef GTEST_DEMO_CSAMPLE_H
#define GTEST_DEMO_CSAMPLE_H

#include <iostream>

using namespace std;

class CSample {
public:
    CSample() {  //构造函数 1
        cout << "Constructor 1 Called" << endl;
    }

    CSample(int n) {  //构造函数 2
        cout << "Constructor 2 Called" << endl;
    }
};

class CTest {
public:
    CTest(int n) {}  //构造函数(1)
    CTest(int n, int m) {}  //构造函数(2)
    CTest() {}  //构造函数(3)
};


#endif //GTEST_DEMO_CSAMPLE_H
