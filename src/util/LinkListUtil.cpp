//
// Created by 陈孟迪 on 2020/9/3.
//

#include "LinkListUtil.h"

void MergeList(LinkList* La, LinkList* Lb, LinkList* Lc) {
    LinkList pa, pb, pc;

    pa = (*La)->next;
    pb = (*Lb)->next;
    pc = *Lc = *La;                        // 用La的头结点作为Lc的头结点

    // 遍历La和Lb
    while(pa && pb) {
        if(pa->data <= pb->data) {
            pc->next = pa;
            pc = pa;
            pa = pa->next;
        } else {
            pc->next = pb;
            pc = pb;
            pb = pb->next;
        }
    }

    // 插入剩余段
    pc->next = pa ? pa : pb;

    // 释放Lb的头结点所占内存
    free(*Lb);

    *La = NULL;
    *Lb = NULL;
}
