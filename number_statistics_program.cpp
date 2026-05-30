#include <iostream>
#include <string>
using namespace std;

int main () {
    int arr[10] = {};
    int nums, even = 0, odd = 0, sum = 0, avg = 0, largest = arr[0], smallest = arr[0];

    for (int i = 0; i < 10; i++) {
        cout << "Enter a positive number : ";
        cin >> nums;
        arr[i] = nums;
        sum += nums;
        while (nums <= 0) {
            cout << "wrong input! Enter a positive number : ";
            cin >> nums;
            arr[i] = nums;
        }
    }

}