#include <bits/stdc++.h>
using namespace std;

// You're going through each character in the string.
// tolower(s[i]) converts uppercase letters to lowercase.
// It works only for letters — non-letters (like digits or symbols) stay the same.
// You return the final modified string.

string toLowerCase(string s) {
    for (char &c : s) {
        c = tolower(c);
    }
    return s;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = toLowerCase(input);
    cout << "Lowercase version: " << result << endl;

    return 0;
}
