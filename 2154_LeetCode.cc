#include <bits/stdc++.h>
using namespace std;

// We store all numbers from nums into a special container called unordered_set — this allows instant lookup.
// We check:
// Is original in the set?
// If yes → double it → repeat
// If no → done → return it
// 🤖 Why unordered_set?
// It checks if a number exists in O(1) time (on average).
// Much faster than looping or using set (which is O(log n)).

int findFinalValue(vector<int>& nums, int original) {
    unordered_set<int> check(nums.begin(), nums.end()); // Fast lookup

    while (check.count(original)) {
        original *= 2; // Keep doubling if found
    }

    return original;
}

int main() {
    int n, original;
    vector<int> nums;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    cout << "Enter the original number: ";
    cin >> original;

    int result = findFinalValue(nums, original);

    cout << "Final number after processing: " << result << endl;

    return 0;
}
