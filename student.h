#pragma once
class Student {
public:
    Student(); // Ĭ�Ϲ��캯��
    Student(int n, const char* nm, char s); // �������Ĺ��캯��
    void display();
    void set_value(int n, const char* nm, char s); // �������ݳ�Ա��ֵ
private:
    int num;
    char name[20];
    char sex;
};