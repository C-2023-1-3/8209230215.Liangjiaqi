#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "请输入x的值：";
    cin >> x;
    if (x < 0 || x >= 10) {
        cout << "x的值不在有效范围内！" << endl;
        return 0;
    }
    if (x < 1) {
        y = 3 - 2 * x;
    }
    else if (x < 5) {
        y = 1 + 2 / (4 * x);
    }
    else {
        y = x * x;
    }
    cout << "y的值为：" << y << endl;
    return 0;
}