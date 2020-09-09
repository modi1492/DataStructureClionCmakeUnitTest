#include "gtest/gtest.h"
#include <iostream>
#include <cpplearning/Student.h>

TEST(Student, StudentT) {
    //在栈上创建对象
    Student stu;
    stu.setname("小明");
    stu.setage(15);
    stu.setscore(92.5f);
    stu.show();
    //在堆上创建对象
    Student *pstu = new Student;
    pstu->setname("李华");
    pstu->setage(16);
    pstu->setscore(96);
    pstu->show();

}

