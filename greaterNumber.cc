#include <iostream>
using namespace std;
int main() {


    int numberOne;
    int numberTwo; 

    cout << "Please type two numbers please" << endl;
    cin >> numberOne;
    cin >> numberTwo;
    if (numberOne > numberTwo) {
    cout << numberOne << endl;
} else { 
    cout << numberTwo << endl;
}
    return 0;
}
