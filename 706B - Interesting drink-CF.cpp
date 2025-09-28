#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    sort(arr1, arr1+n);

    int q; cin >> q;
    int arr2[q];
    for (int i = 0; i < q;i++) {
        cin >> arr2[i];
    }
    
    for (int i = 0; i < q; i++) {
        int count = upper_bound(arr1, arr1+n, arr2[i]) - arr1;
        cout << count << endl;
    }

}
/*
upper_bound gives the first position where value(arr2[i]) is greater 
[1,2,3] -> value = 2 it gives location of value 3
arr1 is the location of first index. Subtracting arr1 gives the index(position) of the found(arr2[i]) element.
*/
