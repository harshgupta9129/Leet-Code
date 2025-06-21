#include <bits/stdc++.h>
using namespace std;

// You're using the formula for the sum of the first n natural numbers:
// Sum of 0 to n = n * (n + 1) / 2
// Then subtract the actual sum of elements in the array to find the missing number.

int missingNumber(vector<int>& nums) {
    int sum = 0;
    for (int i : nums) {
        sum += i;
    }
    int n = nums.size();
    int actualSum = n * (n + 1) / 2;
    return actualSum - sum;
}

int main() {
    vector<int> nums;
    int n;

    cout << "Enter size of array (n): ";
    cin >> n;

    cout << "Enter " << n << " elements (from 0 to n, with one missing):\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int missing = missingNumber(nums);
    cout << "Missing number is: " << missing << endl;
    return 0;
}