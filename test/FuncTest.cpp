#include "gtest/gtest.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int sum(int m, int n) {
    int i;
    for (i = m + 1; i <= n; ++i) {
        m += i;
    }
    return m;
}

void prime(int n) {
    int is_prime = 1, i;
    if (n < 0) {
        printf("%d is a illegal number.\n", n);
        return;  //return后面不带任何数据
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }
    if (is_prime > 0) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}

long factorial(int n) {
    int i;
    long result = 1;
    for (i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long sum(long n) {
    int i;
    long result = 0;
    for (i = 1; i <= n; i++) {
        //在定义过程中出现嵌套调用
        result += factorial(i);
    }
    return result;
}






TEST(Func, FuncTest1) {
    int a, b, total;
    printf("Input two numbers: ");
    a = 1;
    b = 100;
    total = sum(a, b);
    printf("a=%d, b=%d\n", a, b);
    printf("total=%d\n", total);
}

TEST(Func, FuncTest2) {
    int m, n, total;
    printf("Input two numbers: ");
    m = 1;
    n = 100;
    total = sum(m, n);
    printf("m=%d, n=%d\n", m, n);
    printf("total=%d\n", total);
}

TEST(Func, FuncTest3) {
    int num = 1881;
    prime(num);
}

TEST(Func, FuncTest4) {
    printf("1!+2!+...+9!+10! = %ld\n", sum(10));
}






