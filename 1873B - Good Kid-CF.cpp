#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n], minimum = 11, indx = -1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < minimum) {
                minimum = arr[i];
                indx = i;
            }
        }
        arr[indx]++;
        long long ans = 1;
        for (int i = 0; i < n; i++) ans *= arr[i];
        cout << ans << endl;
    }

    return 0;
}
