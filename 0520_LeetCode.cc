#include <bits/stdc++.h>
using namespace std;

// Count the number of uppercase letters.
// Return true if
// Count == 0 (all lowercase)
// Count == word length (all uppercase)
// Count == 1 and first letter is uppercase (like Google)
// This is already O(n) and very efficient.

bool detectCapitalUse(string word) {
    int caps = 0;
    for (char c : word) {
        if (isupper(c)) caps++;
    }

    return (caps == 0 || caps == word.length() || (caps == 1 && isupper(word[0])));
}

int main() {
    string word;
    cout << "Enter the word: ";
    cin >> word;

    if (detectCapitalUse(word)) {
        cout << "Correct capital usage" << endl;
    } else {
        cout << "Incorrect capital usage"<< endl;
    }

    return 0;
}
