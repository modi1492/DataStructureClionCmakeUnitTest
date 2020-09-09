#include <iostream>

using namespace std;

class Student {
private:  //私有的
    char *m_name;
    int m_age;
    float m_score;
public:  //共有的
    //声明构造函数
    Student(char *name, int age, float score);

    Student();

    void setname(char *name);

    void setage(int age);

    void setscore(float score);

    void show();
};