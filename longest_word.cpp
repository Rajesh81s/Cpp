#include <iostream>
#include <string>
using namespace std;

string longestWord(string text) {
    string currentWord = "";
    string longestWord = "";

    for (int i = 0; i < text.length(); i++) {
        if (text[i] != ' ') {
            currentWord += text[i];
        } else {
            if (currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            currentWord = "";
        }
    }

    // Check the last word
    if (currentWord.length() > longestWord.length()) {
        longestWord = currentWord;
    }

    return longestWord;
}

int main() {
    string text = "I love programming in Cplusplus";

    cout << "Longest word: " << longestWord(text);

    return 0;
}