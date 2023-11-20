#include <iostream>
using namespace std;

// 求最大公约数
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

// 求最小公倍数
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;

    cout << "请输入两个正整数：" << endl;
    cin >> a >> b;

    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b);

    cout << "最大公约数：" << gcdResult << endl;
    cout << "最小公倍数：" << lcmResult << endl;

    return 0;
}