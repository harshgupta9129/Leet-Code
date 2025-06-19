#include<bits/stdc++.h>
using namespace std;

// To find the number of trailing zeroes in the factorial of a number n (that is, n!), we need to understand how a trailing zero is formed.
// A trailing zero is added every time a number is multiplied by 10.
// And since 10 = 2 × 5, we need both a 2 and a 5 to make one trailing zero.
// In n! (1 × 2 × 3 × ... × n), we get plenty of 2s because every second number is even.
// But 5s are less frequent, so they are the limiting factor.
// That means:
// 👉 The number of trailing zeroes is equal to the number of times 5 is a factor in all numbers from 1 to n.

int trailingZeroes(int n) {
    int count = 0;
    for (int i = 5; i <= n; i = i + 5) {
        int k = i;
        while (k % 5 == 0) {
            k /= 5;
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = trailingZeroes(n);
    cout << "Trailing zeroes in " << n << "! is: " << result << endl;
    return 0;
}