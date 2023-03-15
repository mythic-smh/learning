#include <iostream>
using namespace std;

int main() {
    // Variables for data 

    float classesAttended;
    float classesTotal;
    // Get user data

    cout << "This is a test to see what percent of classes youve been in to see if you can sit in the exam." << endl;
    cout << "How many classes has been held?" << endl;
    cin >> classesTotal;
    cout << "How many classes have you been to?" << endl;
    cin >> classesAttended;
    // Make sure 'classesTotal' is not 0

    if (classesTotal == 0) {
    cout << "No classes held" << endl;  // If it is 0, the exit program
    return 0;                           // If we run this line, the program does not continue anymore - returns to the terminal
}
    // Calculate percentage
    float percentage = (classesAttended / classesTotal) * 100; 
    
    // Tell them if they can or can't write the exam
    if (percentage < 75) {
    cout << "Sorry, you cannot write the exam". << endl;
    } else {            // percentage must be greater than or equal to 75
    cout << "You can write the exam!" << endl;
}
    return 0;   // Exits program
}
