#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int round = 2*n;
    int arr[round], sumM = 0, sumC = 0;
    for (int i = 0; i < round; i++) cin >> arr[i];

    for (int i = 0; i < round-1; i=i+2) {
        if (arr[i] > arr[i+1]) sumM++;
        else if (arr[i] < arr[i+1]) sumC++;
    }

    if (sumM > sumC) cout << "Mishka" << endl;
    else if (sumC > sumM) cout << "Chris" << endl;
    else cout << "Friendship is magic!^^" << endl;
}
