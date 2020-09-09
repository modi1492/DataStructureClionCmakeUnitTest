#include "Student.h"

//定义构造函数
Student::Student(char *name, int age, float score){
    m_name = name;
    m_age = age;
    m_score = score;
}

Student::Student(){
    m_name = NULL;
    m_age = 0;
    m_score = 0.0;
}


//成员函数的定义
void Student::setname(char *name) {
    m_name = name;
}

void Student::setage(int age) {
    m_age = age;
}

void Student::setscore(float score) {
    m_score = score;
}

void Student::show() {
    cout << m_name << "的年龄是" << m_age << "，成绩是" << m_score << endl;
}