#include "gtest/gtest.h"
#include <iostream>
#include "cpplearning/People.h"

using namespace std;

TEST(People, People) {
    People *p = new People("王志刚", 23);
    p -> display();
    p = new Teacher("赵宏佳", 45, 8200);
    p -> display();
}
