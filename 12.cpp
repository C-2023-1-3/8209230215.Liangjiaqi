#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159; // 定义圆周率
    double radius, height, volume;

    // 从键盘输入圆锥底的半径和锥高
    cout << "请输入圆锥底的半径：";
    cin >> radius;
    cout << "请输入圆锥的高：";
    cin >> height;

    // 计算圆锥的体积
    volume = PI * radius * radius * height / 3;

    // 输出结果
    cout << "圆锥的体积为：" << volume << endl;

    return 0;
}