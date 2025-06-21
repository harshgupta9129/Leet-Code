#include <bits/stdc++.h>
using namespace std;

// You're given a string like "UDLR", where each letter represents a move:
// 'U' → move up (+y)
// 'D' → move down (−y)
// 'L' → move left (−x)
// 'R' → move right (+x)
// You simulate the robot's path and check if it returns to the starting point (0, 0).

bool judgeCircle(string moves) {
    int x = 0, y = 0;
    for (char move : moves) {
        if (move == 'U') y++;
        else if (move == 'D') y--;
        else if (move == 'R') x++;
        else if (move == 'L') x--;
    }
    return x == 0 && y == 0;
}

int main() {
    string moves;
    cout << "Enter move sequence (like UDLR): ";
    cin >> moves;

    if (judgeCircle(moves))
        cout << "Yes, the robot returns to origin ✅" << endl;
    else
        cout << "No, the robot does NOT return to origin ❌" << endl;

    return 0;
}