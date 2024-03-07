/*459A - Pashmak and Garden
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Pashmak has fallen in love with an attractive girl called Parmida since one year ago...

Today, Pashmak set up a meeting with his partner in a romantic garden. Unfortunately, Pashmak has forgotten where the garden is. But he remembers that the garden looks like a square with sides parallel to the coordinate axes. He also remembers that there is exactly one tree on each vertex of the square. Now, Pashmak knows the position of only two of the trees. Help him to find the position of two remaining ones.

Input
The first line contains four space-separated x1, y1, x2, y2 ( - 100 ≤ x1, y1, x2, y2 ≤ 100) integers, where x1 and y1 are coordinates of the first tree and x2 and y2 are coordinates of the second tree. It's guaranteed that the given points are distinct.

Output
If there is no solution to the problem, print -1. Otherwise print four space-separated integers x3, y3, x4, y4 that correspond to the coordinates of the two other trees. If there are several solutions you can output any of them.

Note that x3, y3, x4, y4 must be in the range ( - 1000 ≤ x3, y3, x4, y4 ≤ 1000).

Examples
inputCopy
0 0 0 1
outputCopy
1 0 1 1
inputCopy
0 0 1 1
outputCopy
0 1 1 0
inputCopy
0 0 1 2
outputCopy
-1
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        long long dx = abs(x1 - x2);
        long long dy = abs(y1 - y2);
        
        if (x1 == x2) {
            cout << x1 + dy << " " << y1 << " " << x2 + dy << " " << y2 << endl;
        } else if (y1 == y2) {
            cout << x1 << " " << y1 + dx << " " << x2 << " " << y2 + dx << endl;
        } else if (dx == dy) {
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
