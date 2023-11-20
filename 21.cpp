#include <iostream>
using namespace std;

char convertChar(char inputChar) {
    if (islower(inputChar)) {
        return toupper(inputChar);
    }
    else {
        return inputChar + 1;
    }
}

int main() {
    char inputChar;
    cout << "请输入一个字符：";
    cin >> inputChar;

    char result = convertChar(inputChar);
    cout << "转换结果：" << result << endl;

    return 0;
}