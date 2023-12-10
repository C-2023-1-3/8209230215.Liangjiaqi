#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int parseHex(const char* const hexString) {
    int result = 0;
    int length = strlen(hexString);

    for (int i = 0; i < length; i++) {
        char c = hexString[i];

        if (c >= '0' && c <= '9') {
            result += (c - '0') * pow(16, length - 1 - i);
        }
        else if (c >= 'A' && c <= 'F') {
            result += (c - 'A' + 10) * pow(16, length - 1 - i);
        }
        else if (c >= 'a' && c <= 'f') {
            result += (c - 'a' + 10) * pow(16, length - 1 - i);
        }
        else {
            return -1; 
        }
    }

    return result;
}

int main() {
    const int MAX_LENGTH = 100;
    char hexString[MAX_LENGTH];

    cout << "Enter a hexadecimal number: ";
    cin >> hexString;

    int result = parseHex(hexString);

    if (result != -1) {
        cout << "The decimal equivalent of " << hexString << " is " << result << endl;
    }
    else {
        cout << "Invalid hexadecimal number" << endl;
    }

    return 0;
}