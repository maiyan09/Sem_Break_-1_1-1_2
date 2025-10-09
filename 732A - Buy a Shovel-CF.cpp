#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r; cin >> k >> r;
    for (int i = 1; i <= 10; i++) {
        int rem = (k*i) % 10;
        if (rem == r || rem == 0) {
            cout << i << endl;
            break;
        }
    }
}
/*
Example 1: k = 117, r = 3
Try n from 1 to 10:
1×117 = 117 → ends in 7 → not valid
2×117 = 234 → ends in 4 → not valid
3×117 = 351 → ends in 1 → not valid
4×117 = 468 → ends in 8 → not valid
5×117 = 585 → ends in 5 → not valid
6×117 = 702 → ends in 2 → not valid
7×117 = 819 → ends in 9 → not valid
8×117 = 936 → ends in 6 → not valid
9×117 = 1053 → ends in 3 → (matches r)
→ Answer: 9
*/
