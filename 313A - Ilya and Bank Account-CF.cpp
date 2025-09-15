#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    if (n >= 0) cout << n << endl;
    else {
        string s1 = to_string(n); // converting int to string
        s1.erase(s1.size()-2, 1); // removing 2nd last digit 
        int m = stoi(s1); // converting string to int
        cout << max((n/10), m); 
    }
}
