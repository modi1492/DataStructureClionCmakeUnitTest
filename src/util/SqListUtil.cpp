/*==============
 * 求并集
 *
 * 包含算法: 2.1
 ===============*/

#include <basic/SqList/SqList.h>
#include "SqListUtil.h"      //**▲02 线性表**//

/*
 * ████████ 算法2.1 ████████
 *
 * A=A∪B
 *
 * 计算La与Lb的并集并返回。
 * 由于生成的并集会拼接在La上，所以La的入参为指针类型。
 */
void Union(SqList* La, SqList Lb) {
    int La_len, Lb_len;
    int i;
    ElemType e;

    // 求顺序表长度
    La_len = ListLength(*La);
    Lb_len = ListLength(Lb);

    for(i = 1; i <= Lb_len; i++) {
        // 取Lb中第i个元素赋给e
        GetElem(Lb, i, &e);

        // 若e不在La中则插入
        if(!LocateElem(*La, e, equal)) {
            ListInsert(La, ++La_len, e);
        }
    }
}

/*
 * 判等
 *
 * 判断两元素是否相等。
 * 如果相等，则返回TRUE，否则，返回FALSE。
 */
Status equal(ElemType e1, ElemType e2) {
    return e1 == e2 ? TRUE : FALSE;
}

Status equal(SqList s1, SqList s2){
    return TRUE;
}

/*
 * ████████ 算法2.2 ████████
 *
 * 非递减链表归并：C=A+B
 *
 * 归并顺序表La和Lb，生成新的顺序表Lc。
 * 其中，La、Lb、Lc均为非递减序列。
 */
void MergeSqList_1(SqList La, SqList Lb, SqList* Lc) {
    int La_len, Lb_len;
    int i, j, k;
    ElemType ai, bj;

    i = j = 1;
    k = 0;

    // 初始化Lc
    InitList(Lc);

    // 获取La、Lb的长度
    La_len = ListLength(La);
    Lb_len = ListLength(Lb);

    // 如果La及Lb均未遍历完
    while(i <= La_len && j <= Lb_len) {
        GetElem(La, i, &ai);
        GetElem(Lb, j, &bj);

        // 比较遍历到的元素，先将比较小的元素加入顺序表Lc
        if(ai <= bj) {
            ListInsert(Lc, ++k, ai);
            i++;
        } else {
            ListInsert(Lc, ++k, bj);
            j++;
        }
    }

    // 如果Lb已遍历完，但La还未遍历完，将La中剩余元素加入Lc
    while(i <= La_len) {
        GetElem(La, i++, &ai);
        ListInsert(Lc, ++k, ai);
    }

    // 如果La已遍历完，但Lb还未遍历完，将Lb中剩余元素加入Lc
    while(j <= Lb_len) {
        GetElem(Lb, j++, &bj);
        ListInsert(Lc, ++k, bj);
    }
}

/*
 * ████████ 算法2.7 ████████
 *
 * 非递减链表归并：C=A+B
 *
 * 归并顺序表La和Lb，生成新的顺序表Lc。
 * 其中，La、Lb、Lc均为非递减序列。
 */
void MergeSqList_2(SqList La, SqList Lb, SqList* Lc) {
    ElemType* pa, * pb, * pc;
    ElemType* pa_last, * pb_last;

    pa = La.elem;                        // 指向La第一个元素
    pb = Lb.elem;                        // 指向Lb第一个元素

    // 没有使用InitList创建Lc
    (*Lc).listsize = (*Lc).length = La.length + Lb.length;
    pc = (*Lc).elem = (ElemType*) malloc((*Lc).listsize * sizeof(ElemType));
    if(pc == NULL) {
        exit(OVERFLOW);
    }

    pa_last = La.elem + La.length - 1;    // 指向La最后一个元素
    pb_last = Lb.elem + Lb.length - 1;    // 指向Lb最后一个元素

    // 如果La及Lb均未遍历完
    while(pa <= pa_last && pb <= pb_last) {
        if(*pa <= *pb) {
            *pc++ = *pa++;
        } else {
            *pc++ = *pb++;
        }
    }

    // 如果Lb已遍历完，但La还未遍历完，将La中剩余元素加入Lc
    while(pa <= pa_last) {
        *pc++ = *pa++;
    }

    // 如果La已遍历完，但Lb还未遍历完，将Lb中剩余元素加入Lc
    while(pb <= pb_last) {
        *pc++ = *pb++;
    }
}


