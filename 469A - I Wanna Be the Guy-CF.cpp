#include <iostream>
#include <set>
#include <stack>
using namespace std;

int main() {
    int n, p, q;
    set <int> st;
    cin >> n;
    cin >> p;
    
    for (int i = 0; i < p; i++) {
        int x; cin >> x;
        st.insert(x);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        st.insert(x);
    }
    if (st.size() == n) {
        cout << "I become the guy." << endl;
    }
    else {
        cout <<"Oh, my keyboard!" << endl;
    }
}

