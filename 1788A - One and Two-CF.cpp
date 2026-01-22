#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<int> arr(n);
        int total2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 2) total2++;
        }

        if (total2 % 2 != 0) {
            cout << -1 << "\n";
            continue;
        }
        int need = total2 / 2;
        int cnt2 = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == 2) cnt2++;
            if (cnt2 == need) {
                cout << i + 1 << "\n";
                break;
            }
        }

    }
    return 0;
}
