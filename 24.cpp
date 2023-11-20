#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "请输入运算符（+、-、*、/、%）：";
    cin >> op;

    cout << "请输入两个操作数：";
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        result = num1 + num2;
        cout << "结果：" << result << endl;
        break;
    case '-':
        result = num1 - num2;
        cout << "结果：" << result << endl;
        break;
    case '*':
        result = num1 * num2;
        cout << "结果：" << result << endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            cout << "结果：" << result << endl;
        }
        else {
            cout << "错误：除数不能为零！" << endl;
        }
        break;
    case '%':
        if (num2 != 0) {
            result = fmod(num1, num2);
            cout << "结果：" << result << endl;
        }
        else {
            cout << "错误：除数不能为零！" << endl;
        }
        break;
    default:
        cout << "错误：非法运算符！" << endl;
        break;
    }

    return 0;
}