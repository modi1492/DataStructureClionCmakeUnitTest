//
// Created by 陈孟迪 on 2020/9/6.
//

#ifndef DATASTRUCTURECLIONCMAKEUNITTEST_SQSTACKUTIL_H
#define DATASTRUCTURECLIONCMAKEUNITTEST_SQSTACKUTIL_H

#include <cstdio>
#include "basic/Stack/SqStack/SqStack.h"        //**▲03 栈和队列**//
#ifdef  EOF
#undef  EOF
#define EOF '\0'
#endif

/*
 * ████████ 算法3.1 ████████
 *
 * 进制转换：将指定的非负十进制整数，转换为八进制后输出。
 */
void conversion(int i);

/*
 * ████████ 算法3.2 ████████
 *
 * 行编辑程序，模拟编辑文本时的退格与清空行的操作。
 *
 *【注】
 * 教材使用的是控制台输入，这里为了便于测试，直接改为从形参接收参数
 */
void LineEdit(const char buffer[]);

// 测试函数，打印元素
void Print(SElemType e);

#endif //DATASTRUCTURECLIONCMAKEUNITTEST_SQSTACKUTIL_H
