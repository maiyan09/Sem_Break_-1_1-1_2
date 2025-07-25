#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    map <char, int> st1;
    map <char, int> st2;
    for (auto i : s1) st1[i]++;
    for (auto i : s2) st1[i]++;
    for (auto i : s3) st2[i]++;
    
    if (st1 == st2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}
