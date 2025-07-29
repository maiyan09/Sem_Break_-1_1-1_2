#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector <int> v;

    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
     
    long long int sum = v[0] - 1;
    for (int i = 0; i < m-1; i++) {
        if (v[i+1] < v[i]) {
            sum += (n - (v[i]-v[i+1]));
        }
        else {
            sum += (v[i+1]-v[i]);
        }
    } 
    cout << sum << endl;
}
/* we can also use this loop(using iterator)
vector <int>:: iterator it;
for (it = v.begin(); it != v.end()-1; it++) {
        if (*(it+1) < *it) {
            sum += (n - (*(it) - *(it+1)));
        }
        else {
            sum += (*(it+1) - *(it));
        }
    }
*/
