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
    cout << "������һ���ַ���";
    cin >> inputChar;

    char result = convertChar(inputChar);
    cout << "ת�������" << result << endl;

    return 0;
}