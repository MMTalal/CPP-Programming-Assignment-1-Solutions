#include <iostream> // Include the library for input and output
using namespace std; // Use the standard namespace to simplify code

int main() {
    // Display the assignment title and instructions
    cout << "This is Assignment No. 3;" << endl
         << endl
         << "write a program that ask the user to insert 3 integers then print the average as decimal number." << endl
         << "Input your first number, please: ";

    int FirstNumber; // Declare an integer variable to store the user's input
    cin >> FirstNumber; // Take input from the user and store it in the variable 'FirstNumber'

    cout << "Input your second number, please: ";

    int SecondNumber; // Declare an integer variable to store the user's input
    cin >> SecondNumber; // Take input from the user and store it in the variable 'SecondNumber'

    cout << "Input your third number, please: ";

    int ThirdNumber; // Declare an integer variable to store the user's input
    cin >> ThirdNumber; // Take input from the user and store it in the variable 'ThirdNumber'

    // Display the user's input back to them as a decimal number average
    cout << endl << "The average = " << ((float(FirstNumber)) + (float(SecondNumber)) + (float(ThirdNumber))) / 3 << "." << endl;

    // Another way ..

    // Summaition = (float(FirstNumber)) + (float(SecondNumber)) + (float(ThirdNumber)) //fitst summaition them as a float number
    // cout << "The average = " << Summaition / 3 << "." << endl; // then devision the summaition / 3 
                
    return 0; // Indicate that the program ended successfully
}
