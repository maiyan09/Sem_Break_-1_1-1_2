#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int countPrev = 1, countMax = 1;
    for (int i = 1; i < n; i++){
        if (arr[i] >= arr[i-1]) {
            countPrev++;
        }
        else {
            countPrev = 1; // reset if we found not increasing number 2 2 1 
        }
        if (countPrev >= countMax) { // store the maximum non decreasing number every time
            countMax = countPrev;
        }
    }
    cout << countMax << endl;
    
}
