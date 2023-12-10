#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int distinctNumbers[10] = { 0 }; // 初始化distinctNumbers数组为0

    cout << "Enter ten numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++) {
        bool isDistinct = true;
        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) {
            distinctNumbers[i] = numbers[i];
        }
    }

    cout << "The distinct numbers are: ";
    for (int i = 0; i < 10; i++) {
        if (distinctNumbers[i] != 0) {
            cout << distinctNumbers[i] << " ";
        }
    }

    return 0;
}