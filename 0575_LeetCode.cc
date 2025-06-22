#include <bits/stdc++.h>
using namespace std;

// Calculate how many types of candies are there.
// Sister can get only n/2 candies (since the total is n).
// The answer is the minimum of:
// The number of different candy types
// n/2

int distributeCandies(vector<int>& candyType) {
    sort (candyType.begin(), candyType.end());
    int n = candyType.size();
    int typecandy = 1;
    int check = candyType[0];
    for (int i=1; i<n; i++) {
        if (check!=candyType[i]) {
            check = candyType[i];
            typecandy++;
        }
    }
    if (typecandy > n/2) return n/2;
    return typecandy;
}

int main() {
    vector<int> candyType = {1, 1, 2, 3};  // Try different test cases

    cout << "Max types can eat: " << distributeCandies(candyType) << endl;

    return 0;
}
