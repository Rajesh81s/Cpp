#include <iostream>
#include <string>
using namespace std;

int main() {
    int votes[3] = {};
    int vote;

    for (int i = 0; i < 5; i++) {
        cout << "Candidates : 1 -> BOB\n2 -> Rajesh\n3->KJP\n" "Enter your vote : ";
        cin >> vote;
        while (vote < 1 || vote > 3) {
            cout << "Wrong input try again.\nEnter your vote : ";
            cin >> vote;
        }
        if (vote == 1){
            votes[0]++;
        } else if (vote == 2) {
            votes[1]++;
        } else {
            votes[2]++;
        }
    }
    cout << "=== VOTE RESULT ===\n";
    //Candidates : 1 -> BOB 2 -> Rajesh 3->KJP
    cout << "BOB :      " << votes[0] << "\n";
    cout << "Rajesh :   " << votes[1] << "\n";
    cout << "KJP :      " << votes[2] << "\n";
    cout << "\n";

    if (votes[0] > votes[1] && votes[0] > votes[2]) {
        cout << "WINNER = BOB\n";
    } else if (votes[1] > votes[0] && votes[1] > votes[2]) {
        cout << "WINNER = Rajesh\n";
    } else if (votes[2] > votes[0] && votes[2] > votes[1]) {
        cout << "WINNER + KJP\n";
    } else {
        cout << "IT'S A TIE\n";
    }

    return 0;
}