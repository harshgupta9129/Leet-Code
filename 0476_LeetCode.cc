#include <bits/stdc++.h>
using namespace std;

// Start with:
// pow = 1 → to track the current bit's value (1, 2, 4, 8, ...)
// ans = 0 → to store the final complement
// Loop through each bit of the number:
// If the current bit (num % 2) is 0, flip it to 1 and add pow to ans
// If it's 1, skip (because 1 flips to 0)
// Shift the number right (num /= 2) and update pow *= 2
// Return the final answer

int findComplement(int num) {
    long long pow = 1, ans = 0;

    while (num) {
        if (num % 2 == 0) {
            ans += pow; // Bit is 0 → flip to 1 → add to answer
        }
        num /= 2;
        pow *= 2;
    }

    return int(ans);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = findComplement(num);
    cout << "Complement is: " << result << endl;
    return 0;
}
