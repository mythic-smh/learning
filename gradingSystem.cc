#include <iostream>
using namespace std;

int main() {

    cout << "Lets see what mark you got on your test!" << endl;
    cout << "Please enter your mark results." << endl;
    cin >> markResult;

    if (markResult > 80) {
    cout << "You got a A!" << endl;
} if else (markResult > 60 && markResult <= 80) {
    cout << "You got a B!" << endl;
} if else (markResult > 50 && markResult <= 60) {
    cout << "You got a C" << endl;
} if else (markResult > 45 && markResult <= 50) {
    cout << "You got a D" << endl;
} if else (markResult > 25 && markResult <= 45) {
    cout << "You got a E" << endl;
} if else (markResult > 0 && markResult <= 25) {
    cout << "Sorry but you have failed." << endl;
}
    return 0;
}
