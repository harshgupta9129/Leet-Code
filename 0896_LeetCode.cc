#include <bits/stdc++.h>
using namespace std;

// Assume the array is increasing and decreasing.
// Loop through it once.
// If you find a pair that breaks increasing, mark it false.
// Same for decreasing.
// If either is still true at the end, the array is monotonic.

bool isMonotonic(vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] < nums[i + 1]) decreasing = false;
        if (nums[i] > nums[i + 1]) increasing = false;
    }

    return increasing || decreasing;
}

int main() {
    vector<int> nums = {1, 2, 2, 3};  // Try changing to {6, 5, 4} or {1, 3, 2}
    
    if (isMonotonic(nums))
        cout << "Array is monotonic.\n";
    else
        cout << "Array is NOT monotonic.\n";

    return 0;
}
