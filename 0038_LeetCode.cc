#include <bits/stdc++.h>
using namespace std;

// Start with "1" (because countAndSay(1) is always "1")
// Loop from 2 to n, and in each loop:
// Read the current string character by character
// Count how many times a character repeats in a row
// Add count + digit to the next string
// Update the answer with this new string
// Return the final result after building up to n

string countAndSay(int n) {
    int i = 2;
    string ans = "1";

    while (i <= n) {
        string temp = "";
        char check = ans[0];
        int count = 1;

        for (int j = 1; j < ans.length(); j++) {
            if (check == ans[j]) {
                count++;
            } else {
                temp.push_back(count + '0'); // Convert count to char
                temp.push_back(check);       // Add the character
                check = ans[j];              // Update current char
                count = 1;                   // Reset count
            }
        }
        // Add the last counted group
        temp.push_back(count + '0');
        temp.push_back(check);

        ans = temp;
        i++;
    }

    return ans;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Count and Say result: " << countAndSay(n) << endl;

    return 0;
}