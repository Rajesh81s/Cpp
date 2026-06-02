//Count vowels

#include <iostream>
#include <string>
using namespace std;

int countVowel(string text, int length) {
    int count = 0;

    for(int i = 0; i < length; i++) {
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string text;

    cout << "Enter your string : ";
    getline(cin, text);
    
    int length = text.length();

    cout << countVowel(text, length);
    return 0;
}