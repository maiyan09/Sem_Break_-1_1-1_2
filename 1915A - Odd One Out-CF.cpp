#include <iostream>
using namespace std;

int main() {
	int t; cin >> t;
	
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		
		int uncommon;
		if (a==b) uncommon = c;
		else if (b == c) uncommon = a;
		else uncommon = b;
		
		cout << uncommon << endl;
	}

}
