#include <iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int i = 0, j = 0;
    int index = -1;

    while (s2[i] != '\0') {
        if (s1[j] == '\0') {
            return index;
        }
        else if (s1[j] == s2[i]) {
            if (index == -1) {
                index = i;
            }
            j++;
        }
        else {
            index = -1;
            j = 0;
        }
        i++;
    }

    if (s1[j] == '\0') {
        return index;
    }
    else {
        return -1;
    }
}

int main() {
    char s1[80];
    char s2[80];

    cout << "Enter the first string: ";
    cin.getline(s1, 80);

    cout << "Enter the second string: ";
    cin.getline(s2, 80);

    int result = indexOf(s1, s2);

    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;

    return 0;
}