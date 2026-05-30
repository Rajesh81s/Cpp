#include <iostream>
using namespace std;

int evenOrOdd(int arr[], int n, int &odd) {
    int even = 0;
    odd = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    return even;
}

int main() {
    int even, odd, n = 5;
    int arr[5] = {};
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    even = evenOrOdd(arr, n, odd);
    cout << even << endl;
    cout << odd << endl;

    return 0;
}