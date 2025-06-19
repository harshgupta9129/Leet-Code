#include <bits/stdc++.h>
using namespace std;

// Start from the last digit (rightmost).
// If it is less than 9, just add 1 and return the vector.
// If it is 9, turn it into 0 and carry the 1 to the next digit.
// Keep repeating until there’s no carry left.
// If all digits were 9, then after the loop we simply add 1 at the beginning.
// For example: 999 + 1 = 1000, so we return [1, 0, 0, 0].

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();

    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }

    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    int n;
    vector<int> digits;

    cout << "Enter number of digits: ";
    cin >> n;

    cout << "Enter the digits (space-separated): ";
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        digits.push_back(d);
    }

    vector<int> result = plusOne(digits);

    cout << "Result after adding one: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
