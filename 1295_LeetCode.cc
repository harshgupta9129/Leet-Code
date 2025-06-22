#include <bits/stdc++.h>
using namespace std;

// We use log10(n) + 1 to quickly find the number of digits in a number,
// because log10(n) tells us how many times we can divide the number by 10
// before it drops below 1, and adding 1 gives us the total digit count
// making it much faster than checking each digit one by one. ✅

int findNumbers(vector<int>& nums) {
    int ans = 0;
    for (int i : nums) {
        int digits = (int)log10(i) + 1;
        if (digits % 2 == 0)
            ans++;
    }
    return ans;
}

int main() {
    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << "Count of even-digit numbers: " << findNumbers(nums) << endl;
    return 0;
}
