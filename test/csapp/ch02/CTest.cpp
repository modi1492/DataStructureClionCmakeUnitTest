#include "gtest/gtest.h"
#include <iostream>
#include <stdio.h>
#include "util/util.h"

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf("%.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], unsigned long cnt){
    unsigned long first, last;
    for(first = 0, last = cnt -1; first <= last; first++, last--){
        inplace_swap(&a[first], &a[last]);
    }
}

TEST(Func, FuncTest5) {
    int ival = 12345;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

TEST(Chapter02, exercise2_5) {
    int val = 0x87654321;
    byte_pointer valp = (byte_pointer) &val;
    show_bytes(valp, 1);
    show_bytes(valp, 2);
    show_bytes(valp, 3);
}

TEST(Chapter02, exercise2_7) {
    const char *s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s));
    printf("\n");
    for (int i = 0; i < strlen(s); i++) {
        printf("%x\t", s[i]);
    }
}

TEST(Chapter02, exercise2_10) {
    int x = 3;
    int y = 4;
    inplace_swap(&x, &y);
    printf("%d\t%d\n", x,y);
}

TEST(Chapter02, exercise2_11) {
    int a[4] = {1,2,3,4};
    int b[5] = {1,2,3,4,5};
    unsigned long alen = sizeof(a)/ sizeof(int);
    unsigned long blen = sizeof(b)/ sizeof(int);

    traverse(a, alen);
    reverse_array(a, alen);
    traverse(a, alen);

    traverse(b, blen);
    reverse_array(b, blen);
    traverse(b,blen);
}

TEST(Chapter02, exercise2_2_3){
    int32_t  i = 1;
    uint64_t j = 2;
}

