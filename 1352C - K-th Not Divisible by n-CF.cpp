#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int t; cin >> t;
    while (t--) {
        long long n, k; cin >> n >> k;
        long long ans = (k-1)/(n-1);
        cout << ans+k << endl;
    }
    return 0;
}
