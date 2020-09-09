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

TEST(Student, StudentSize) {
    //在栈上创建对象
    cout << sizeof(char *) << " "<< sizeof(int) << " "<< sizeof(float) << endl;
    Student stu;
    cout<<sizeof(stu)<<endl;
    //在堆上创建对象
    Student *pstu = new Student();
    cout<<sizeof(*pstu)<<endl;
    //类的大小
    cout<<sizeof(Student)<<endl;
}

TEST(Student, StudentConstruct) {
    //调用构造函数 Student(char *, int, float)
    Student stu("小明", 15, 92.5f);
    stu.show();
    //调用构造函数 Student()
    Student *pstu = new Student();
    pstu -> show();
    pstu -> setname("李华");
    pstu -> setage(16);
    pstu -> setscore(96);
    pstu -> show();
}



