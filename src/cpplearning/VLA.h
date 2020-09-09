//
// Created by 陈孟迪 on 2020/9/9.
//

#ifndef GTEST_DEMO_VLA_H
#define GTEST_DEMO_VLA_H


class VLA {
private:
    const int m_len;
    int *m_arr;
public:
    VLA(int len);
};


#endif //GTEST_DEMO_VLA_H
