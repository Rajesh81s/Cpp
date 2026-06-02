#include <iostream>
#include <string>
using namespace std;

int totalWords(string text, int length) {
    int words = 1;
    for(int i = 0; i < length; i++) {
        if(text[i] == ' ') {
            words++;
        }
    }
    return words;
}

int main() {
    string text;
    cout << "Enter your words : ";
    getline(cin, text);

    int length = text.length();

    cout << totalWords(text, length);
    return 0;
}