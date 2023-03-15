#include <iostream>
using namespace std;
int main() {

    cout << "Hello, this is a test to see if your shape is either a square or a rectangle" << endl;

    int length;

    cout << "Please type your length" << endl;
    cin >> length;
    
    int width;

    cout << "Please type your width" << endl;
    cin >> width;

    if (length != width) {
    cout << "Its a rectangle!" << endl;
} else { 
    cout << "Its a square!" << endl;
}
    return 0;
}
