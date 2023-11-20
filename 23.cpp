
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "请输入三角形的三条边长：" << endl;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) { // 判断是否能构成三角形
        double p = (a + b + c) / 2; // 计算半周长
        double area = sqrt(p * (p - a) * (p - b) * (p - c)); // 计算面积
        cout << "这是一个";
        if (a == b && b == c) {
            cout << "等边三角形，";
        }
        else if (a == b || a == c || b == c) {
            cout << "等腰三角形，";
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "直角三角形，";
        }
        else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a) {
            cout << "钝角三角形，";
        }
        else {
            cout << "锐角三角形，";
        }
        cout << "周长为" << a + b + c << "，面积为" << area << endl;
    }
    else {
        cout << "这三条边无法构成一个三角形" << endl;
    }
    return 0;
}

