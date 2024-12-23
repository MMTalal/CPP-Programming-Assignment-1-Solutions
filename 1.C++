#include <iostream> // Include the library for input and output
using namespace std; // Use the standard namespace to simplify code

int main() {
    // Display the assignment title and instructions
    cout << "This is Assignment No. 1;" << endl
         << endl
         << "Write a program that takes an integer from the user and then prints it."
         << endl
         << "Input your number, please: ";

    int Number; // Declare an integer variable to store the user's input
    cin >> Number; // Take input from the user and store it in the variable 'Number'

    // Display the user's input back to them
    cout << endl << "The number you chose is " << Number << ".";

    return 0; // Indicate that the program ended successfully
}
