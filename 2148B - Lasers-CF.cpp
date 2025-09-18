#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--) {
        int n, m, x, y; cin >> n >> m >> x >> y;
        for (int i = 0; i < (n+m); i++) cin >> y;
        cout << (n+m) << endl;
    }

    return 0;
}
