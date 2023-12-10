#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    bool lockers[100] = { false }; 
    for (int i = 1; i <= 100; i++) {
        for (int j = i - 1; j < 100; j += i) {
            lockers[j] = !lockers[j];
        }
    }
    cout << "开着的存物柜编号为：";
    for (int i = 0; i < 100; i++) {
        if (lockers[i]) {
            cout << setw(2) << i + 1 << " ";
        }
    }
    cout << endl;

    return 0;
}