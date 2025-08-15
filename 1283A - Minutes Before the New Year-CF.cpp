#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int h, m; cin >> h >> m;
        int ans = 60 - m;
        h++; // minute minus korle 1 hour add hbe.
        ans += (24 - h)*60; // covert hour to minutes by multiplying 60
        cout << ans << endl;
    }
    return 0;
}
