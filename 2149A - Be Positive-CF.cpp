#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        int count0 = 0, count1 = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i]; 
            if (arr[i] == 0) count0++;
            else if (arr[i] == -1) count1++;
        }
        int ans = count0;
        if (count1 % 2 != 0) {
            ans += 2;
        }
        cout << ans << endl;
    }
}
