#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string word) {
    int start = 0, end = word.length() - 1;

    while(start < end) {
        if(word[start] != word[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string word = "abcd";

    if(isPalindrome(word)) {
        cout << "Palindrome!\n";
    } else {
        cout << "Not Plaindrome\n";
    }
    return 0;
}