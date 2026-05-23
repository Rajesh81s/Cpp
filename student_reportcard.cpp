#include <iostream>
#include <string>
using namespace std;

int main () {
    int marks[100] = {};
    int subNo;
    string subName[100] = {};
    string studentName;
    double sum = 0, avg;
    char grade;

    cout << "Enter your name : ";
    getline(cin, studentName);
    cout << "Enter total number of subjects (eg : 5) : ";
    cin >> subNo;
    cin.ignore();

    for (int j = 0; j < subNo; j++) {
        cout << "Enter your subject " << j+1 << ": ";
        getline(cin, subName[j]);
    }
    for( int i = 0; i < subNo; i++) {
        cout << "Enter your marks " << i+1 << " : ";
        cin >> marks[i];

        while (marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid marks! enter again marks " << i+1 << " : ";
            cin >> marks[i];
        }
        sum += marks[i];
    }
    
    avg = sum / subNo;

    if(avg >= 90) {
        grade = 'A';
    } else if(avg >= 80) {
        grade = 'B';
    } else if(avg >= 70) {
        grade = 'C';
    } else {
        grade = 'F';
    }

    cout << "===== STUDENT REPORT =====" << "\n";
    cout << "Name       :   " << studentName << "\n\n";
    
    for(int i = 0; i < subNo; i++) {
        cout << subName[i] << "     :   " << marks[i] << "\n";
    }
    cout << "\n";
    cout << "TOTAL MARKS    :   " << sum << "\n";
    cout << "AVERAGE        :   " << avg << "\n";
    cout << "GRADE          :   " << grade << "\n";
    return 0;
}