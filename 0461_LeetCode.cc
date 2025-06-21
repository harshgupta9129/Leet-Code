#include <bits/stdc++.h>
using namespace std;

// You manually extract bits of x and y using % 2 and compare them.
// If the bits are different, you increment ans.
// You do this while both numbers are not zero.
// Then, for the remaining bits (if one number is longer in binary), you count all the 1s in it (because those are different from the shorter number's implicit 0s).

int hammingDistance(int x, int y) {
    int ans = 0;
    while (x!=0 && y!=0) {
        ans+= (x%2 - y%2)*(x%2 - y%2);
        x/=2;
        y/=2;
    }
    while (x!=0) {
        ans+=(x%2);
        x/=2;
    }
    while (y!=0) {
        ans+=(y%2);
        y/=2;
    }
    return ans;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    int distance = hammingDistance(x, y);
    cout << "Hamming Distance: " << distance << endl;

    return 0;
}
