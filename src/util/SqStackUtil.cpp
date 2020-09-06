//
// Created by 陈孟迪 on 2020/9/6.
//

#include "SqStackUtil.h"

/*
 * ████████ 算法3.1 ████████
 *
 * 进制转换：将指定的非负十进制整数，转换为八进制后输出。
 *
 *【注】
 * 教材使用的是控制台输入，这里为了便于测试，直接改为从形参接收参数
 */
void conversion(int i) {
    SqStack S;
    SElemType e;

    InitStack(&S);

    // 八进制数前面加0
    printf("十进制数 %d 转换为八进制数后为：0", i);

    while(i!=0) {
        Push(&S, i % 8);    // 进栈时从低位到高位
        i = i / 8;
    }

    while(StackEmpty(S)==FALSE) {
        Pop(&S, &e);        // 出栈时从高位到低位
        printf("%d", e);
    }

    printf("\n");
}

/*
 * ████████ 算法3.2 ████████
 *
 * 行编辑程序，模拟编辑文本时的退格与清空行的操作。
 *
 *【注】
 * 教材使用的是控制台输入，这里为了便于测试，直接改为从形参接收参数
 */
void LineEdit(const char buffer[]) {
    SqStack S;                        //接收输入的字符
    SElemType e;
    int i;
    char ch;

    // 初始化栈
    InitStack(&S);

    i = 0;
    ch = buffer[i++];

    // 如果未达文本末尾
    while(ch != EOF) {
        // 如果未达文本末尾，且本行未结束（未遇到换行）
        while(ch != EOF && ch != '\n') {
            switch(ch) {
                case '#':
                    Pop(&S, &e);    // 遇到'#'表示删除一个字符
                    break;
                case '@':
                    ClearStack(&S); // 遇到'@'表示清空当前行
                    break;
                default :
                    Push(&S, ch);   // 有效字符入栈
            }

            // 识别下一个字符
            ch = buffer[i++];
        }

        // 清空之前输出当前栈的内容，此处教材上没有
        StackTraverse(S, Print);

        // 清空改行的缓冲区
        ClearStack(&S);

        // 如果未到文本末尾，说明遇到了'\n'，即该行结束了
        if(ch != EOF) {
            // 进入下一行
            ch = buffer[i++];
        }
    }

    // 已经到了文本末尾，输出目前栈中的元素，此处教材上没有
    StackTraverse(S, Print);

    // 销毁栈
    DestroyStack(&S);
}

// 测试函数，打印元素
void Print(SElemType e) {
    printf("%c", e);
}