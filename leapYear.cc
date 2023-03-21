#include <iostream>
using namespace std;

int main() {

    int userYear;
    cout << "This is a test to see if a year is a leap year or not." << endl;
    cout << "Please type any year you would like to see." << endl;
    cin >> userYear;

    if (userYear % 4 == 0) { // If user year is divisible by 4
        if (userYear % 100 == 0) { // If user year is divisible by 100
            if (userYear % 400 == 0) { // If user year is divisible by 400
                cout << "Your year is a leap year!" << endl;
            } else { 
                cout << "Your year is not a leap year." << endl;
            }
        } else {
            cout << "Your year is not a leap year." << endl;
        }
    } else {
        cout << "Your year is not a leap year." << endl;
    }
    return 0;
}
