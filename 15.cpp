#include <iostream>
#include <iomanip>
using namespace std;

double fahrenheit_to_celsius(double fahrenheit) {
    double celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    double fahrenheit, celsius;
    cout << "请输入华氏温度：";
    cin >> fahrenheit;
    celsius = fahrenheit_to_celsius(fahrenheit);
    cout << "摄氏温度为：" << fixed << setprecision(2) << celsius << " 度" << endl;
    return 0;
}