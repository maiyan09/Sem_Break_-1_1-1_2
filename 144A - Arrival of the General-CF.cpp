#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
	int n, countMax = 0, countMin = 0;
	cin >> n;
	vector <int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
	int minimum = INT_MAX;
	int maximum = INT_MIN;
	for (int i = 0; i < v.size(); i++) {
		if (v[i] > maximum) {
			countMax = i;
			maximum = v[i];
		}
		if (v[i] <= minimum) {
			countMin = i ;
			minimum = v[i];
		}
	}
	if (countMax > countMin){
	    countMin++;
	}
	cout << countMax+(n-1)-countMin << endl;
}
