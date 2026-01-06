#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w; cin >> y >> w;
    int p = 6 - max(y, w)+1;
    
    if (p == 0) cout << "0/1" << endl;
    else if (p == 6) cout << "1/1" << endl;
    else if (p == 2) cout << "1/3" << endl;
    else if (p == 3) cout << "1/2" << endl;
    else if (p == 4) cout << "2/3" << endl;
    else cout << p << "/" << 6 << endl;

    return 0;
}
