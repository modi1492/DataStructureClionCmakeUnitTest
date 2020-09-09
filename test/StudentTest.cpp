#include "gtest/gtest.h"
#include <iostream>
#include <cpplearning/Student.h>

TEST(Student, StudentT) {
    Student *pStu = new Student;
    pStu -> name = "小明";
    pStu -> age = 15;
    pStu -> score = 92.5f;
    pStu -> say();
    delete pStu;  //删除对象

}

