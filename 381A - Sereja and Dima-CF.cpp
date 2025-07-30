#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;

    vector <int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    int sumS = 0,sumD = 0, f = 1;
    while (!v.empty()) {
        if (f == 1) {
            if ((v.back() > v.front())) {
                sumS = sumS + v.back();
                v.pop_back(); 
            }
            else {
                sumS = sumS + v.front();
                v.erase(v.begin());
            }
            f = 0;
        }
        else {
            if ((v.back() > v.front())) {
                sumD += v.back();
                v.pop_back();
            }
            else {
                sumD += v.front();
                v.erase(v.begin());
            }
            f = 1;
        }
    }
    cout << sumS << " " << sumD << endl;
}
