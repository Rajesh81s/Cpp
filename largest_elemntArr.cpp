//Find largst element in array

#include <iostream>
using namespace std;

int largestElement(int arr[], int length) {
    int largest = arr[0];
    for(int i = 1; i < length; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int arr[5] = {};
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << "Largest element : " << largestElement(arr, 5) << endl;
    return 0;
}
