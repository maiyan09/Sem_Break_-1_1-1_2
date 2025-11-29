#include <iostream>
using namespace std;

int find(int n) {
    int arr[] = {1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
    for (int i = 0; i < 36; i++) {
        if (arr[i] == n) {
            return i+1;
            break;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans = find(n);
        if (ans%4==2) {
            cout << (ans/4)*10 + 3 << endl;
        }
        else if (ans%4==3) {
            cout << (ans/4)*10 + 6 << endl;
        }
        else if (ans%4==1) {
            cout << (ans/4)*10 + 1 << endl;
        }
        else {
            cout << (ans/4)*10 << endl;
        }
    }
    return 0;
}
