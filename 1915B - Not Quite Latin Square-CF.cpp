#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        char ch[3][3];
        int a, b, c;
        a = b = c = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cin >> ch[i][j]; 
                if (ch[i][j] == 'A') a++;
                else if (ch[i][j] == 'B') b++;
                else if (ch[i][j] == 'C') c++;
            }
        }
        if (a == 2) cout << "A" << endl;
        else if (b == 2) cout << "B" << endl;
        else if (c == 2) cout << "C" << endl;
    }

    return 0;
}
