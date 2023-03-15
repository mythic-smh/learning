#include <iostream>
using namespace std;
int main() {
    int Answer;
    cout << "Welcome to Mateo's shopping goods!" << endl;
    cout << "Today everything is $100 but if you buy 10 items you get a 10 percent off discount or if you buy $1000 of items" << endl;
    cout << "How much money are you going to spend today?" << endl;
    cin >> Answer;

    if (Answer >= 1000 ) {
    Answer = Answer * 9 / 10;
    cout << "Your total will be " << Answer << " dollars, have a good day!" << endl;
} else if (Answer < 1000) {
    cout << "Your total is " << Answer << " dollars, have a good day!" << endl;
}
    return 0;
}
