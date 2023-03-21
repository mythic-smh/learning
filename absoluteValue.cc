#include <iostream> 
using namespace std;

int main() {

int number;
cout << "Please type a number" << endl;
cin >> number;

if (number < 0) {
    number = number * -1;
    cout << number << endl;
}
    return 0;
}
