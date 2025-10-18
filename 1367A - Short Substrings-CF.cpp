#include <bits/stdc++.h>
using namespace std;

void shortSubstring(string s) {
  if (s.size() < 3) {
    cout << s << endl;
    return;
  }

  string result;
  for (int i = 0; i < s.size(); i+=2) {
    result += s[i];
  }
  if (s.size() % 2 == 0) {
      result += s[s.size() - 1];
  }
  cout << result << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
      string s; cin >> s;
      shortSubstring(s);
    }
        
    return 0;
}
