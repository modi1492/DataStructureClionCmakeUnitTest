#include "gtest/gtest.h"
//遍历 vector 容器。
#include <iostream>
//需要引入 vector 头文件
#include <array>
using namespace std;

TEST(Array, ArrayT){
    std::array<int, 4> values{};
    //初始化 values 容器为 {0,1,2,3}
    for (int i = 0; i < values.size(); i++) {
        values.at(i) = i;
    }
    //使用 get() 重载函数输出指定位置元素
    cout << get<3>(values) << endl;
    //如果容器不为空，则输出容器中所有的元素
    if (!values.empty()) {
        for (auto val = values.begin(); val < values.end(); val++) {
            cout << *val << " ";
        }
    }
}


TEST(Array, BeginEnd){
    array<int, 5>values{};
    int h = 1;
    auto first = values.begin();
    auto last = values.end();
    //初始化 values 容器为{1,2,3,4,5}
    while (first != last)
    {
        *first = h;
        ++first;
        h++;
    }

    first = values.begin();
    while (first != last)
    {
        cout << *first << " ";
        ++first;
    }
}

TEST(Array, CBeginEnd){
    array<int, 5>values{1,2,3,4,5};
    int h = 1;
    auto first = values.cbegin();
    auto last = values.cend();

    //由于 *first 为 const 类型，不能用来修改元素
    //*first = 10;

    //遍历容器并输出容器中所有元素
    while (first != last)
    {
        //可以使用 const 类型迭代器访问元素
        cout << *first << " ";
        ++first;
    }
}

TEST(Array, RBeginEnd){
    array<int, 5>values{};
    int h = 1;
    auto first = values.rbegin();
    auto last = values.rend();
    //初始化 values 容器为 {5,4,3,2,1}
    while (first != last)
    {
        *first = h;
        ++first;
        h++;
    }
    //重新遍历容器，并输入各个元素
    first = values.rbegin();
    while (first != last)
    {
        cout << *first << " ";
        ++first;
    }
    cout << endl << "enforced for loop" << endl;

    for (first = values.rbegin(); first != values.rend(); ++first) {
        cout << *first << " ";
    }
}

TEST(Array, AccessMethod){
    array<int, 5> values1{};
    array<int, 5> values2{};
    //初始化 values1 为 {0,1,2,3,4}
    for (size_t i = 0; i < values1.size(); ++i)
    {
        values1.at(i) = i;
    }
    cout << "values1[0] is : " << values1[0] << endl;
    cout << "values1[1] is : " << values1.at(1) << endl;
    cout << "values1[2] is : " << get<2>(values1) << endl;
    //初始化 values2 为{10，11，12，13，14}
    int initvalue = 10;
    for (auto& value : values2)
    {
        value = initvalue;
        initvalue++;
    }
    cout <<  "Values1 is : ";
    for (auto i = values1.begin(); i < values1.end(); i++) {
        cout << *i << " ";
    }
    cout << endl << "Values2 is : ";
    for (auto i = values2.begin(); i < values2.end(); i++) {
        cout << *i << " ";
    }
}
