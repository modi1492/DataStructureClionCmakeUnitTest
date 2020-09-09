#include "VLA.h"
#include <iostream>

using namespace std;

VLA::VLA(int len) : m_len(len) {  //使用初始化列表来给 m_len 赋值
    if (len > 0) { m_arr = new int[len];  /*分配内存*/ }
    else { m_arr = nullptr; }
}

VLA::~VLA() {
    delete[] m_arr;  //释放内存
}

void VLA::input() {
    for (int i = 0; m_p = at(i); i++) { cin >> *at(i); }
}

void VLA::show() {
    for (int i = 0; m_p = at(i); i++) {
        if (i == m_len - 1) { cout << *at(i) << endl; }
        else { cout << *at(i) << ", "; }
    }
}

int *VLA::at(int i) {
    if (!m_arr || i < 0 || i >= m_len) { return nullptr; }
    else { return m_arr + i; }
}
