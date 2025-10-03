#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) cin >> arr[i];

        sort(arr.begin(), arr.end());
        int diff = 0; 
        for (int i = 0; i < n; i+=2) {
            if (arr[i+1] - arr[i] > diff) {
                diff = arr[i+1] - arr[i];
            }
        }
        cout << diff << endl;
    }
}
