#include<bits/stdc++.h>
using namespace std;

// We use binary search because the numbers are sorted from 1 to n.
// We start with two pointers: i = 0 and j = n.
// We guess the middle number: mid = i + (j - i) / 2.
// We call guess(mid):
// If the result is 0, we've found the number and return mid.
// If it's -1, the hidden number is smaller, so we move the upper bound j to mid - 1.
// If it's 1, the hidden number is larger, so we move the lower bound i to mid + 1.
// We repeat this process until we find the correct number.

// Simulate the picked number (you can change this to test)
int picked = 42;

// Mock version of guess API
int guess(int num) {
    if (num > picked) return -1;
    else if (num < picked) return 1;
    else return 0;
}

int guessNumber(int n) {
        int i = 0, j = n;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            int ans = guess(mid);
            if (ans == 0) return mid;
            else if (ans == -1) j = mid - 1;
            else i = mid + 1;
        }
        return i;
    }

int main() {
    int n;
    cout << "Enter the maximum number (n): ";
    cin >> n;

    int result = guessNumber(n);
    cout << "The picked number is: " << result << endl;

    return 0;
}