#include <iostream>
using namespace std;

int main() {
    cout << "Welcome this is a age tester" << endl;
    int ageOne;
    int ageTwo;
    int ageThree;
    cout << "Please type your first age out of three." << endl;
    cin >> ageOne;
    cout << "Please type your second age." << endl;
    cin >> ageTwo;
    cout << "Please type your third and final age." << endl;
    cin >>  ageThree;

    if (ageOne > ageTwo && ageOne > ageThree) {
    cout << ageOne << endl;
} else if (ageTwo > ageOne && ageTwo > ageThree) {
    cout << ageTwo << endl;
} else if (ageThree > ageOne && ageThree > ageTwo) {
    cout << ageThree << endl;
}
 if (ageOne < ageTwo && ageOne < ageThree) {
    cout << ageOne << endl;
} else if (ageTwo < ageOne && ageTwo < ageThree) {
    cout << ageTwo << endl;
} else if (ageThree < ageOne && ageThree < ageTwo) {
    cout << ageThree << endl;
}
    return 0;
}
