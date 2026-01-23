#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int minimum = INT_MAX;
        vector <int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < minimum) minimum = arr[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += (arr[i] - minimum);
        }
        cout << ans << endl;
    }

    return 0;
}
