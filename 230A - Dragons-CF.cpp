#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    bool dragon = true;
    int s, n;
    cin >> s >> n;
    
    vector < pair<int , int> > x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i].first >> x[i].second;
    }
    sort(x.begin(), x.end());

    for (int i = 0; i < n; i++) {
        if (x[i].first < s) {
            s = s + x[i].second;
        }
        else {
            dragon = false;
        }
    }
    if (dragon) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
