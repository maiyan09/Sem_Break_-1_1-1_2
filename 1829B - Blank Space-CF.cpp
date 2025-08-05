#include <iostream>
#include <string>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int maximum0 = 0, count0 = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) count0++;
            else count0 = 0; // if we found '1' reset count value
            if (count0 > maximum0) maximum0 = count0;
        }
        cout << maximum0 << endl;
    }
}
