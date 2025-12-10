#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool isThree = false;
        int count = 0;
        for (int i = 0; i < n; i++) {//##..##...
            if (s[i] == '.' && i+2 < n) {
                if (s[i+1] == '.' && s[i+2] == '.') {
                    isThree = true;
                    break;
                }
            }
            if (s[i] == '.') count++;
        }
        if (isThree) cout << "2" << endl;
        else cout << count << endl;
    }

    return 0;
}
