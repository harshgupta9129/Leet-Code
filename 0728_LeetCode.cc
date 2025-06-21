#include <bits/stdc++.h>
using namespace std;

// Looping from left to right
// For each number:
// Checking if it contains 0 or any digit that doesn't divide the number
// If all digits divide the number → ✅ add to result
// ⏱️ Time Complexity:
// Let N = right - left + 1
// Each number takes O(log₁₀(n)) time (because you're checking its digits)

bool isSelfDividing(int num) {
    int original = num;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || original % digit != 0)
            return false;
        num /= 10;
    }
    return true;
}

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> ans;
    for (int i = left; i <= right; ++i) {
        if (isSelfDividing(i))
            ans.push_back(i);
    }
    return ans;
}

int main() {
    int left, right;
    cout << "Enter left and right: ";
    cin >> left >> right;

    vector<int> result = selfDividingNumbers(left, right);
    cout << "Self-dividing numbers: ";
    for (int num : result)
        cout << num << " ";
    cout << endl;

    return 0;
}
