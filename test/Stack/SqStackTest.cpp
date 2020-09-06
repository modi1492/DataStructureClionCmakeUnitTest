#include "gtest/gtest.h"
#include <iostream>
#include "basic/Stack/SqStack/SqStack.h"
#include "util/SqStackUtil.h"
#include "Status/Status.h"
#include "util/util.h"

using namespace std;

TEST(SqStack, SqStackT) {
    SqStack S;
    int i;
    SElemType e;

    printf("████████ 函数 InitStack \n");
    {
        printf("█ 初始化顺序栈 S ...\n");
        InitStack(&S);
    }
    PressEnterToContinue(debug);

    printf("████████ 函数 StackEmpty \n");
    {
        StackEmpty(S)
        ? printf("█ S 为空！！\n") : printf("█ S 不为空！\n");
    }
    PressEnterToContinue(debug);

    printf("████████ 函数 Push \n");
    {
        for (
                i = 1;
                i <= 6; i++) {
            Push(&S,
                 2 * i);
            printf("█ 将 \"%2d\" 压入栈 S ...\n", 2 * i);
        }
    }
    PressEnterToContinue(debug);

    printf("████████ 函数 StackTraverse \n");
    {
        printf("█ S 中的元素为：S = ");
        StackTraverse(S, PrintElem
        );
    }
    PressEnterToContinue(debug);

    printf("████████ 函数 StackLength \n");
    {
        i = StackLength(S);
        printf("█ S 的长度为 %d \n", i);
    }
    PressEnterToContinue(debug);

    printf("████████ 函数 Pop \n");
    {
        Pop(&S, &e
        );
        printf("█ 栈顶元素 \"%d\" 出栈...\n", e);
        printf("█ S 中的元素为：S = ");
        StackTraverse(S, PrintElem
        );
    }
    PressEnterToContinue(debug);

    printf("████████ 函数 GetTop \n");
    {
        GetTop(S, &e
        );
        printf("█ 栈顶元素的值为 \"%d\" \n", e);
    }
    PressEnterToContinue(debug);

    printf("████████ 函数 ClearStack \n");
    {
        printf("█ 清空 S 前：");
        StackEmpty(S)
        ? printf(" S 为空！！\n") : printf(" S 不为空！\n");

        ClearStack(&S);

        printf("█ 清空 S 后：");
        StackEmpty(S)
        ? printf(" S 为空！！\n") : printf(" S 不为空！\n");
    }
    PressEnterToContinue(debug);

    printf("████████ 函数 DestroyStack \n");
    {
        printf("█ 销毁 S 前：");
        S.base != NULL && S.top != NULL ? printf(" S 存在！\n") : printf(" S 不存在！！\n");

        DestroyStack(&S);

        printf("█ 销毁 S 后：");
        S.base != NULL && S.top != NULL ? printf(" S 存在！\n") : printf(" S 不存在！！\n");
    }
    PressEnterToContinue(debug);
}


TEST(SqStack, SqStackConversion) {
    int i = 342391;

    printf("将十进制数转换为八进制数...\n");

    conversion(i);

}

TEST(SqStack, SqStackLineEdit) {
    char* buf = "whli##ilr#e(s#*s)\noutcha@    putchar(*s=#++);";   //需要录入的内容

    printf("作为示范，用户输入的文本内容为：\n");
    printf("%s\n\n", buf);

    printf("进入行编辑程序...\n\n");

    printf("特殊符号：'#' 代表删除上一元素　'@' 代表删除当前输入行\n");
    printf("         '\\n'代表此行输入无误　'\\0'代表输入结束\n");
    printf("最终存储的内容为：\n");
    LineEdit(buf);
}

