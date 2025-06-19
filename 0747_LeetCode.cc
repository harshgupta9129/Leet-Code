#include <bits/stdc++.h>
using namespace std;

// Find the largest number (max1) and its index in the array.
// Find the second-largest number (max2), but make sure it’s not equal to the largest one.
// Check the condition:
// If the largest number is at least twice the second-largest, return its index.
// Otherwise, return -1.

int dominantIndex(vector<int>& nums) {
    int max1 = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[max1]) max1 = i;
    }

    int max2 = INT_MIN;
    for (int i = 0; i < nums.size(); i++) {
        if (i != max1 && nums[i] > max2) {
            max2 = nums[i];
        }
    }

    if (nums[max1] >= 2 * max2) return max1;
    return -1;
}

int main() {
    int n;
    vector<int> nums;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int result = dominantIndex(nums);

    if (result != -1)
        cout << "Dominant index: " << result << " (value = " << nums[result] << ")" << endl;
    else
        cout << "No dominant index found." << endl;

    return 0;
}
