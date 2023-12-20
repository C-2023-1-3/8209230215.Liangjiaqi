#include <iostream>
#include "student.h"

using namespace std;

int main() {
    Student stud; // 默认构造函数
    stud.display(); // 执行stud对象的display函数

    Student stud1(007, "tcg", 'm'); // 带参数的构造函数
    stud1.display();

    stud.set_value(123, "Alice", 'f'); // 使用set_value函数设置数据成员的值
    stud.display();

    return 0;
}