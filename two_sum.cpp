#include <iostream>
using namespace std;

int main() {
   int nums[5] = {1,2,3,4,5};
   int target = 9;
   int start = 0, arrayLength = sizeof(nums) / sizeof(nums[0]), end = arrayLength - 1;
    
    for (int i = 0; i < end; i++) {
        for(int j = 1; i < end; j++) {
            cout << nums[j] + nums[j] << "\n";
        }
    }

    return 0;
}