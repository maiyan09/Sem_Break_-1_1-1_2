#include <iostream>
using namespace std;
int main(){
    int n, indexEven = 0, indexOdd = 0, countEven = 0, countOdd = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) { 
            countEven++;
            indexEven = i;
        }
        else {
            countOdd++;
            indexOdd = i;
        }
    }
    if (countEven < countOdd) {
        cout << indexEven+1 << endl;
    }
    else {
        cout << indexOdd+1 << endl;
    }
} 
