#include <iostream>
#include "student.h"

using namespace std;

int main() {
    Student stud; // Ĭ�Ϲ��캯��
    stud.display(); // ִ��stud�����display����

    Student stud1(007, "tcg", 'm'); // �������Ĺ��캯��
    stud1.display();

    stud.set_value(123, "Alice", 'f'); // ʹ��set_value�����������ݳ�Ա��ֵ
    stud.display();

    return 0;
}