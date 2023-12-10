#include <iostream>
#include <cstring>
using namespace std;

void count(const char s[], int counts[]) {
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        char c = tolower(s[i]);

        if (isalpha(c)) {
            counts[c - 'a']++;
        }
    }
}

    int main()
{
    
    char s[100];
    int counts[26] = { 0 };

    cout << "Enter a string: ";
    cin.getline(s, sizeof(s));

    count(s, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            cout << (char)('a' + i) << ": " << counts[i] << " times" << endl;
        }
    }

    return 0;
}