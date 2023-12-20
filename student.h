#pragma once
class Student {
public:
    Student(); // 默认构造函数
    Student(int n, const char* nm, char s); // 带参数的构造函数
    void display();
    void set_value(int n, const char* nm, char s); // 设置数据成员的值
private:
    int num;
    char name[20];
    char sex;
};