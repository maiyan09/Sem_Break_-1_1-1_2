#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, score = 0; cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 0) score++;
            else score += arr[i];
        }
        cout << score << endl;
    }
    return 0;
}
