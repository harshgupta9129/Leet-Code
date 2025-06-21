#include <bits/stdc++.h>
using namespace std;

// We use a set (like a pocket) to store the numbers we've already seen while going through the array.
// Go through the array one number at a time.
// For each number:
// Check if its double is already in the set.
// Also check if it is half of any number in the set (only if it’s even).
// If either is true → return true (we found a match).
// If not, store this number in the set and continue.
// After checking all numbers, if no match → return false.

bool checkIfExist(vector<int>& arr) {
    set <int> seen;
    for (int num : arr) {
        // Check if double or half (if even) exists in the set
        if (seen.count(num * 2) || (num % 2 == 0 && seen.count(num / 2))) {
            return true;
        }
        seen.insert(num); // Add current number to set
    }
    return false;
}

int main() {
    int n;
    vector<int> arr;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    if (checkIfExist(arr)) {
        cout << "Yes, one number is double of another." << endl;
    } else {
        cout << "No such pair found." << endl;
    }
    return 0;
}
