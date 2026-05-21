#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, favGame, userName;
    int age;
    int length;

    cout << "Enter your full name : ";
    getline(cin, fullName);
    cout << "Enter your favorite game name : ";
    getline(cin, favGame);
    cout << "Enter your age : ";
    cin >> age;

    length = fullName.length();
    userName = fullName[0]+favGame+to_string(age);

    cout << "==== PROFILE ====" << "\n";
    cout << "Name : " << fullName << "\n";
    cout << "Length of the name : " << length << "\n";
    cout << "First Character : " << fullName[0] << "\n";
    cout << "Last character : " << fullName[length -1] << "\n";
    cout << "Username : " << userName << "\n";
    cout << "=============" << "\n";

    return 0;

}