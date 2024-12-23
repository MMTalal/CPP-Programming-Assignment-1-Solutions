#include <iostream> // Include the library for input and output
using namespace std; // Use the standard namespace to simplify code

int main() {
    // Display the assignment title and instructions
    cout << "This is Assignment No. 2;" << endl
         << endl
         << "2. write a program that ask the user to insert 3 numbers then print the sum." << endl
         << "Input your first number, please: ";

    int FirstNumber; // Declare an integer variable to store the user's input
    cin >> FirstNumber; // Take input from the user and store it in the variable 'FirstNumber'

    cout << "Input your second number, please: ";

    int SecondNumber; // Declare an integer variable to store the user's input
    cin >> SecondNumber; // Take input from the user and store it in the variable 'SecondNumber'

    cout << "Input your first number, please: ";

    int ThirdNumber; // Declare an integer variable to store the user's input
    cin >> ThirdNumber; // Take input from the user and store it in the variable 'ThirdNumber'

    // Display the summation user's inputs back to them
    cout << endl << "The summation of 3 integers is " << FirstNumber + SecondNumber + ThirdNumber << "." << endl;

    return 0; // Indicate that the program ended successfully
}
