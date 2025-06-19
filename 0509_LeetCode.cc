#include<bits/stdc++.h>
using namespace std;

// Goal: Find the n-th Fibonacci number.
// 👣 Step-by-step:
// Start with the first two values:
// F(0) = 0
// F(1) = 1
// Use a vector to store all Fibonacci numbers from 0 to n.
// Fill the vector step-by-step:
// For each index i from 2 to n:
// Calculate fibo[i] = fibo[i-1] + fibo[i-2]
// When the loop finishes, the n-th Fibonacci number is already stored in fibo[n].

int fib(int n) {
    vector<int> fibo(n + 1);
    fibo[0] = 0;
    if (n >= 1)
        fibo[1] = 1;

    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo[n];
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci(" << n << ") = " << fib(n) << endl;
    return 0;
}