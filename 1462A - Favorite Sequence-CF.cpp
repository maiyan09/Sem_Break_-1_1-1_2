#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr1[n], arr2[n];
        for (int i = 0; i < n; i++) cin >> arr1[i];
        
        int i = 0, j = n-1;
        bool first = true;
        while (i <= j) {
            if (first) {
                cout << arr1[i] << " ";
                first = false;
                i++;
            }
            else {
                cout << arr1[j] << " ";
                first = true;
                j--;
            }
        }
        cout << endl;
    }

    return 0;
}
