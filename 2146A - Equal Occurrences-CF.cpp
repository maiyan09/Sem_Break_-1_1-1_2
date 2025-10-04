#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        map <int, int> m;
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            m[v[i]]++;
        }
        int maximum = 0;
        for (int f = 1; f <= n; f++) { // For each f, count how many elements appear f times.
            int count = 0;
            for  (auto j : m) {
                if (j.second >= f) { 
                    count++;
                }
            }
            maximum = max(maximum, count*f);
        }
        cout << maximum << endl;
    }
}
/*
Example:
    Array: [1, 1, 4, 4, 4]
    Frequencies: {1: 2, 4: 3}
    f = 1, (How many elements appear at least 1 time) → both 1 and 4 qualify → 2 * 1 = 2
    f = 2, (How many elements appear at least 2 time) → both 1 and 4 qualify → 2 * 2 = 4 ✅
    f = 3, (How many elements appear at least 3 time) → only 4 qualifies → 1 * 3 = 3
*/
