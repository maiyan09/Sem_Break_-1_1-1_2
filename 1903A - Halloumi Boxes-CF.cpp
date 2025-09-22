#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool halloumiBoxes(vector <int> v, int k) {
    if (k >= 2) return true;
    else {
        vector <int> copy = v;
        sort(copy.begin(), copy.end());
        if (copy == v) return true;
        else return false;
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector <int> v(n);
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v.push_back(x);
        }
        if (halloumiBoxes(v, k)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
