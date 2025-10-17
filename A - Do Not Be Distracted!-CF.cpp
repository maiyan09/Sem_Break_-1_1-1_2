#include <bits/stdc++.h>
using namespace std; 
#define endl "\n"

int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    bool st = true;
    int i = 0;
    while (s[i] != '\0') {
      for (int j = i+1; j < s.size(); j++) {
        if (s[i] == s[j] && j-i > 1) {
          st = false;
          break;
        }
        else if (s[i] == s[j]) {
          i = j;
          continue;
        }
      }
      i++;
    }
    if (st) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
