#include <iostream>
using namespace std;

int main() {
    char c;
    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    cout << "请输入一行字符（以回车换行结束）：" << endl;

    while ((c = cin.get()) != '\n') {
        if (isalpha(c)) {
            letterCount++;
        }
        else if (isspace(c)) {
            spaceCount++;
        }
        else if (isdigit(c)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "英文字母个数：" << letterCount << endl;
    cout << "空格个数：" << spaceCount << endl;
    cout << "数字个数：" << digitCount << endl;
    cout << "其他字符个数：" << otherCount << endl;

    return 0;
}