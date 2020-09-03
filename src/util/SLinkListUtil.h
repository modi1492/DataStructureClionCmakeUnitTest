//
// Created by 陈孟迪 on 2020/9/3.
//

#ifndef GTEST_DEMO_SLINKLISTUTIL_H
#define GTEST_DEMO_SLINKLISTUTIL_H


#include <basic/List/SLinkList/SLinkList.h>

/*
 * ████████ 算法2.17 ████████
 *
 * S = (A-B)∪(B-A)
 *
 * 对集合A和集合B进行(A-B)∪(B-A)计算，计算结果存入静态链表S
 *
 *
 *【备注】
 *
 * 教材中默认从控制台读取数据。
 * 这里为了方便测试，避免每次运行都手动输入数据，
 * 因而允许选择从预设的文件path中读取测试数据。
 *
 * 如果需要从控制台读取数据，则path为NULL或者为空串，
 * 如果需要从文件中读取数据，则需要在path中填写文件名信息。
 */
void difference(SLinkList space, int* S, char* path);


#endif //GTEST_DEMO_SLINKLISTUTIL_H
