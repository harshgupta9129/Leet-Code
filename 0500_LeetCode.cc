#include <bits/stdc++.h>
using namespace std;

// We define 3 strings, each representing a keyboard row.
// For each word in the list:
// Convert the word to lowercase to ignore letter casing.
// For each character, check which row it belongs to (row1, row2, or row3).
// Count how many characters from that word belong to each row.
// If all letters of the word belong to the same row, we add it to the result.

vector<string> findWords(vector<string>& words) {
    vector<string> result;

    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl";
    string row3 = "zxcvbnm";

    for (string word : words) {
        string temp = word;
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower); // convert to lowercase

        int count1 = 0, count2 = 0, count3 = 0;

        for (char c : temp) {
            if (row1.find(c) != string::npos) count1++;
            else if (row2.find(c) != string::npos) count2++;
            else if (row3.find(c) != string::npos) count3++;
        }

        // If all letters came from one row only
        if (count1 == temp.length() || count2 == temp.length() || count3 == temp.length()) {
            result.push_back(word); // store original word
        }
    }

    return result;
}

int main() {
    vector<string> words;
    int n;
    
    cout << "Enter number of words: ";
    cin >> n;

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        words.push_back(s);
    }

    vector<string> output = findWords(words);

    cout << "Words that can be typed using one row:\n";
    for (string w : output) {
        cout << w << " ";
    }

    cout << endl;
    return 0;
}
