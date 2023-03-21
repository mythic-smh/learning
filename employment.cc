#include <iostream>
using namespace std;

int main() {

int userAge;
char userSex;
char userMartial;
cout << "This is a tesy to see if you have to work in a urban area." << endl;
cout << "Please type \"M\" if you're a male and \"F\" if you're a female." << endl;
cin >> userSex;
cout << "Now please type your age." << endl;
cin >> userAge;
cout << "Finally please type if you're married or not \"Y\" or \"N\"" << endl;
cin >> userMartial;

if (userSex == 'F') {
    cout << "You can only work in urban areas." << endl;
} else if (userSex == 'M' && userAge >= 20 && userAge <= 40) {
    cout << "You may work anywhere." << endl;
} else if (userSex == 'M' && userAge >= 40 && userAge <= 60) {
    cout << "You many only work in urban areas." << endl;
} else {
    cout << "Error." << endl;
}
    return 0;
}
