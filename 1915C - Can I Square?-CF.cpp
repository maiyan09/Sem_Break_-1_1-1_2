#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long int n; cin >> n;
        long long arr[n], sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        long long s = sqrt(sum);
        if (s*s == sum) cout << "YES" << endl;
        else cout << "NO"  << endl;
    }

    return 0;
}
