#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int oddCount = 0;
        int n, k; cin >> n >> k;
        map<char, int>m;
        string s; cin >> s;
        for (auto i : s) m[i]++;
        for (auto i : m) {
            if (i.second % 2 != 0) {
                oddCount++;
            }
        }
        if (oddCount > k+1) cout <<"NO" << endl;
        else cout << "YES" << endl;
    }
}
/*
All characters must appear an even number of times, but at most one character can appear an odd number of times (it would sit in the middle).
Odd count ≤ 1	✅ Can form palindrome ("madam" m=2, a=2, d=1 )
Odd count > 1	❌ Cannot form palindrome ("hello" h=1, e=1, l=2, o=1)
*/
