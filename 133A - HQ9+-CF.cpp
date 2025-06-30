#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	bool x = false;
	string s;
	cin >> s;
	

	if (find(s.begin(), s.end(), 'H') != s.end()) {
		x = true;
	}
	if (find(s.begin(), s.end(), 'Q') != s.end()) {
		x = true;
	}
	if (find(s.begin(), s.end(), '9') != s.end()) {
		x = true;
	}
	if (x) {
		cout << "Found";
	}
	else {
		cout << "Not Found!";
	}
}
