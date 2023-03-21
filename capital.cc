#include <iostream>
using namespace std;

int main () {

    string answer;
    cout << "Please type in a letter a from to z either uppercase or not and it will print if it is either uppercase or lowercase." << endl;
    cin >> answer;

if (answer == "a" || answer == "b" || answer == "c" || answer == "d" || answer == "e" || answer == "f" || answer == "g" || answer == "h"|| answer == "i" || answer == "j" || answer == "k" || answer == "l" || answer == "m" || answer == "n" || answer == "o" || answer == "p" || answer == "q" || answer == "r" || answer == "s" || answer == "t" || answer == "u" || answer == "v" || answer == "w" || answer == "x" || answer == "y" || answer == "z") {
    cout << "Your character is lowercase." << endl;
} else if (answer == "A" || answer == "B" || answer == "C" || answer == "D" || answer == "E" || answer == "F" || answer == "G" || answer == "H" || answer == "I" || answer == "J" || answer == "K" || answer == "L" || answer == "M" || answer == "N" || answer == "O"|| answer == "P" || answer == "Q" || answer == "R" || answer == "S" || answer == "T" || answer == "U" || answer == "V" || answer == "W" || answer == "X" || answer == "Y" || answer == "Z") {
    cout << "Your character is uppercase." << endl;
}
    return 0;
}
