#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector <int> p, m, pe;
    int c1 = 0, c2 = 0, c3 = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x==1) {
            p.push_back(i);
            c1++;
        }
        else if (x==2) {
            m.push_back(i);
            c2++;
        }
        else if (x==3){
            pe.push_back(i);
            c3++;
        }
    }
    int w = min({c1, c2, c3});
    cout << w << endl;
    for (int i = 0; i < w; i++) {
        cout << p[i]+1 << " " << m[i]+1 << " " << pe[i]+1<< endl;
    }
}
