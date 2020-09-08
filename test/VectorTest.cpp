#include "gtest/gtest.h"
#include <iostream>
#include "vector/vector.h"

using namespace std;


TEST(Vector, VectorT) {
    Vector<int> V(10,3,3);
//    for (int i = 0; i < 3; i++) V.insert(i + 1); //在[0, 3n)中选择n个数，随机插入向量
    for(int i = 0; i< V.size(); i++){
        cout<<i;
    }
}

