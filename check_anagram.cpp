#include <iostream>
#include <string>
using namespace std;

bool is_anagram(string word1, string word2, int length1, int length2) {
    if(length1 != length2) {
        return false;
    }
    for(int i  = 0; i < length1; i++) {
        int count1 = 0;
        int count2 = 0;

        for(int j = 0; j < length1; j++) {
            if(word1[j] == word1[i]) {
                count1++;
            }
        }
        for(int j = 0; j < length2; j++) {
            if(word2[j] == word2[i]) {
                count2++;
            }
        }
        if(count1 != count2) {
            return false;
        }
    }
    return true;
}

int main() {
    string word1 = "aab";
    string word2 = "baa";

    int length1 = word1.length();
    int length2 = word2.length();

    if(is_anagram(word1, word2, length1, length2)) {
        cout << "It's anagram!";
    } else {
        cout << "Not an anagram!";
    }

    return 0;
}