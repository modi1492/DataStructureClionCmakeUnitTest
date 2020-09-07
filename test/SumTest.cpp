#include "gtest/gtest.h"
#include <iostream>
#include "sum/sum.h"
#include "random/Shuffle.h"
#include "UniPrint/print_int_array.h"
#include "reverse/reverse.h"

using namespace std;


TEST(Sum, SumT) {
    int n = 10;
    int* A = ( int* ) malloc ( n * sizeof ( int ) ); //ToDo: check NULL != A
    srand ( ( unsigned int ) time ( NULL ) );
// 顺序
    for ( int i = 0; i < n; i++ ) A[i] = i; print ( A, n );
    printf ( "SumI  = %d\n", sumI ( A, n ) );
    printf ( "SumR1 = %d\n", sum ( A, n ) );
    printf ( "SumR2 = %d\n\n", sum ( A, 0, n ) );
// 随机置乱
    shuffle ( A, n ); print ( A, n );
    printf ( "SumI  = %d\n", sumI ( A, n ) );
    printf ( "SumR1 = %d\n", sum ( A, n ) );
    printf ( "SumR2 = %d\n\n", sum ( A, 0, n ) );
// 前后颠倒
    reverse ( A, n ); print ( A, n );
    printf ( "SumI  = %d\n", sumI ( A, n ) );
    printf ( "SumR1 = %d\n", sum ( A, n ) );
    printf ( "SumR2 = %d\n\n", sum ( A, 0, n ) );
//
    free ( A );
    printf ( "Test done.\a\n" );
}

