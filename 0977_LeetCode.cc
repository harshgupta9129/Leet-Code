#include <bits/stdc++.h>
using namespace std;

// Find the first index j where the number becomes non-negative.
// Set i = j - 1 to point to the last negative number.
// Compare nums[i]^2 and nums[j]^2, and insert the smaller into the result.
// Move i left or j right depending on which square was smaller.
// Add the remaining squares from either side.

vector<int> sortedSquares(vector<int>& nums) {
    vector<int> ans;
    int j = 0;

    // Step 1: Find the first non-negative number
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] >= 0) {
            j = i;
            break;
        }
        j = nums.size(); // All negative case
    }

    int i = j - 1;  // Last negative index

    // Step 2: Merge squares from both sides
    while (i >= 0 && j < nums.size()) {
        int leftSq = nums[i] * nums[i];
        int rightSq = nums[j] * nums[j];
        if (leftSq < rightSq) {
            ans.push_back(leftSq);
            i--;
        } else {
            ans.push_back(rightSq);
            j++;
        }
    }

    // Step 3: Append remaining left squares
    while (i >= 0) {
        ans.push_back(nums[i] * nums[i]);
        i--;
    }

    // Step 4: Append remaining right squares
    while (j < nums.size()) {
        ans.push_back(nums[j] * nums[j]);
        j++;
    }

    return ans;
}

int main() {
    vector<int> nums = {-9, -2, 0, 2, 3};
    vector<int> result = sortedSquares(nums);

    cout << "Sorted Squares: ";
    for (int x : result) cout << x << " ";
    cout << endl;

    return 0;
}
