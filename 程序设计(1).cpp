#include <iostream>
using namespace std;

int indexof(const char* s1, const char* s2) {
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
    const int MAX_LENGTH = 100;
    char s1[MAX_LENGTH];
    char s2[MAX_LENGTH];

    cout << "Enter the first string: ";
    cin.getline(s1, MAX_LENGTH);

    cout << "Enter the second string: ";
    cin.getline(s2, MAX_LENGTH);

    int result = indexof(s1, s2);

    if (result != -1) {
        cout << "\"" << s1 << "\" is a substring of \"" << s2 << "\" at index " << result << endl;
    }
    else {
        cout << "\"" << s1 << "\" is not a substring of \"" << s2 << "\"" << endl;
    }

    return 0;
}