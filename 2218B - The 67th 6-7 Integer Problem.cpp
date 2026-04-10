#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    while (n--) {
        int arr[7];
        for (int i = 0; i < 7; i++) cin >> arr[i];

        sort(arr, arr + 7);

        int sum = 0;
        for (int i = 0; i < 7; i++) {
            if (i < 6) arr[i] = -arr[i];
            sum += arr[i];
        }

        cout << sum << endl;
    }
    return 0;
}
