//
// Created by 陈孟迪 on 2020/9/9.
//

#ifndef GTEST_DEMO_PEOPLE_H
#define GTEST_DEMO_PEOPLE_H


#include <iostream>

using namespace std;

//基类People
class People {
public:
    People(char *name, int age);

    virtual void display();

protected:
    char *m_name;
    int m_age;
};

People::People(char *name, int age) : m_name(name), m_age(age) {}

void People::display() {
    cout << m_name << "今年" << m_age << "岁了，是个无业游民。" << endl;
}

//派生类Teacher
class Teacher : public People {
public:
    Teacher(char *name, int age, int salary);

     void display();

private:
    int m_salary;
};

Teacher::Teacher(char *name, int age, int salary) : People(name, age), m_salary(salary) {}

void Teacher::display() {
    cout << m_name << "今年" << m_age << "岁了，是一名教师，每月有" << m_salary << "元的收入。" << endl;
}


#endif //GTEST_DEMO_PEOPLE_H
