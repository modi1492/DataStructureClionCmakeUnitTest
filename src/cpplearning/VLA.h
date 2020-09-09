//
// Created by 陈孟迪 on 2020/9/9.
//

#ifndef GTEST_DEMO_VLA_H
#define GTEST_DEMO_VLA_H

class VLA {
public:
    explicit VLA(int len);  //构造函数
    ~VLA();  //析构函数
public:
    void input();  //从控制台输入数组元素
    void show();  //显示数组元素
private:
    int *at(int i);  //获取第i个元素的指针
private:
    const int m_len;  //数组长度
    int *m_arr; //数组指针
    int *m_p;  //指向数组第i个元素的指针
};


#endif //GTEST_DEMO_VLA_H
