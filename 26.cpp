#include <iostream>
using namespace std;

// �����Լ��
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

// ����С������
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;

    cout << "������������������" << endl;
    cin >> a >> b;

    int gcdResult = gcd(a, b);
    int lcmResult = lcm(a, b);

    cout << "���Լ����" << gcdResult << endl;
    cout << "��С��������" << lcmResult << endl;

    return 0;
}