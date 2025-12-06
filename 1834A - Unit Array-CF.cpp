#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        int cntOdd = 0, cntEven = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 1) cntEven++;
            else cntOdd++;
        }
        long long ans = 0;
        while ((cntEven<cntOdd) || (cntOdd%2==1)) {
            cntEven++;
            cntOdd--;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
}
