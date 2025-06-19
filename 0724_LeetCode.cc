#include <bits/stdc++.h>
using namespace std;

// Calculate the total sum of the array.
// This is the sum of all elements, and we’ll call it sumRight.
// Start from the beginning of the array.
// We keep two running totals:
// sumLeft → sum of elements before the current index
// sumRight → sum of elements after the current index
// At each index:
// First, remove the current number from sumRight, because it's not on the right side anymore.
// Then compare:
// If sumLeft == sumRight, we’ve found the pivot index. ✅
// If not, add the current number to sumLeft (because it will be on the left in the next step).
// If you go through the whole array without finding a match, return -1 (no pivot index exists).

int pivotIndex(vector<int>& nums) {
    int sumRight = 0, sumLeft = 0;

    for (int i = 0; i < nums.size(); i++) {
        sumRight += nums[i];
    }

    int pivot_index = 0;

    while (pivot_index < nums.size()) {
        sumRight -= nums[pivot_index];
        if (sumLeft == sumRight) return pivot_index;
        sumLeft += nums[pivot_index];
        pivot_index++;
    }

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

    int result = pivotIndex(nums);

    if (result != -1)
        cout << "Pivot index is: " << result << endl;
    else
        cout << "No pivot index found." << endl;

    return 0;
}
