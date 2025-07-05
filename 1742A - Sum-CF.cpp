#include <iostream>
using namespace std;

bool sum(int x, int y, int z) {
    if (x+y == z) return true;
    else if (x+z == y) return true;
    else if (y+z == x) return true;
    else return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (sum(x, y, z)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}
