#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr.begin(), arr.end());

        int ans = -1;

        for (int i = n - 1; i >= 2; i--) {
            if (arr[i] == arr[i-1] && arr[i-1] == arr[i-2]) {
                ans = arr[i];   // or arr[i-2], same value
                break;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
