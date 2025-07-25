#include <iostream>
using namespace std;

int main() {
    int n, k, count = 0, sum = 0;
    cin >> n >> k;

    int time = 240 - k; // 4hours = 240 min
    for (int i = 1; i <= n; i++) {
        sum = sum + (i * 5);
        if (sum <= time) count++;
    }
    cout << count << endl;
}
