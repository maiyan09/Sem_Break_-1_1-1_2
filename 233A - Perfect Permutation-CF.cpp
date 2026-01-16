#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    
    if (n % 2 != 0) {
        cout << "-1" << endl;
    }
    else {
        for (int i = 1; i < n ; i += 2) { // 6 --> 2 1 4 3 6 5
            cout << i+1 << " " << i << " ";
        }
    }

    return 0;
}
