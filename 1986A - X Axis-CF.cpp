#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int x, y, z; cin >> x >> y >> z;
        
        int secondMax = (x+y+z) - max({x,y,z}) - min({x,y,z});
        
        cout << abs(x-secondMax) + abs(y-secondMax) + abs(z-secondMax) << endl;
    }

    return 0;
}
