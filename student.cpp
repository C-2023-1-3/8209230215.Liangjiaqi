#include <iostream>
#include "student.h"

using namespace std;

Student::Student() {
    num = 0;
    name[0] = '\0';
    sex = ' ';
}

Student::Student(int n, const char* nm, char s) {
    num = n;
    strncpy_s(name, sizeof(name), nm, _TRUNCATE);
    sex = s;
}

void Student::display() {
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}

void Student::set_value(int n, const char* nm, char s) {
    num = n;
    strncpy_s(name, sizeof(name), nm, _TRUNCATE);
    sex = s;
}