#include <iostream> // Include the library for input and output operations
using namespace std; // Use the standard namespace to simplify code

int main() {
    // Display the assignment title and instructions
    cout << "This is Assignment No. 5;" << endl
         << endl
         << "Write a program to calculate the sum of the digits of a 3-digit number." << endl;

    // Prompt the user to input a 3-digit number
    cout << "Input 3-digit int number: ";
    int Num; // Declare a variable to store the 3-digit number
    cin >> Num; // Get the input from the user (e.g., 345)

    // Declare variables to store individual digits
    int first, second, third;

    // Extract the first digit (hundreds place)
    // Example: If Num = 345, then Num / 100 = 3
    first = (Num / 100);

    // Extract the second digit (tens place)
    // Example: If Num = 345, then Num / 10 = 34. The second digit is 34 % 10 = 4
    second = (Num / 10) % 10;

    // Extract the third digit (ones place)
    // Example: If Num = 345, then Num % 10 = 5
    third = (Num % 10);

    // Display the extracted digits for clarity
    cout << endl;
    cout << "First digit: " << first << endl; // Example output: First digit: 3
    cout << "Second digit: " << second << endl; // Example output: Second digit: 4
    cout << "Third digit: " << third << endl; // Example output: Third digit: 5

    // Calculate and display the sum of the digits
    // Example: Sum = 3 + 4 + 5 = 12
    cout << endl << "Summation of digits is: " << first + second + third << endl;

    return 0; // Indicate that the program ended successfully
}
