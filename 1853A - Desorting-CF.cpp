#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        bool sorted = true;
        for (int i = 0; i < n-1; i++) {
            if (arr[i] > arr[i + 1]) {
                sorted = false;
                break;
            }
        }

        if (!sorted) {
            cout << 0 << '\n';
            continue;
        }
        
        long long gap = INT_MAX;
        int indx = -1;
        for (int i = 0; i < n-1; i++) {
            if (arr[i+1]-arr[i] < gap) { // 1 8 10 13
                gap = arr[i+1]-arr[i];
                indx = i;
            }
        }
        long long ans = 0;
        while (arr[indx] <= arr[indx+1]) { // 1 8 10 13
            ans++;
            arr[indx]++;
            arr[indx+1]--;
        }
        cout << ans << endl;
    }
    return 0;
}
