#include <iostream> // Include the library for input and output
using namespace std; // Use the standard namespace to simplify code

int main() {
    // Display the assignment title and instructions
    cout << "This is Assignment No. 6;" << endl
         << endl
         << "Write a program to convert a given integer (in seconds) to hours, minutes and seconds." << endl
         << "Input your seconds number: ";

    int Num; // Variable to store the input number of seconds
    cin >> Num; // Take input from the user
    
    int Hours, Minutes, Seconds; // Variables to store the calculated hours, minutes, and seconds

    // Calculate hours by dividing the total seconds by 3600 (seconds in an hour)
    Hours = (Num / 3600);
    
    // Calculate minutes by taking the remainder after dividing by 3600, then dividing by 60 (seconds in a minute)
    Minutes = (Num % 3600) / 60 ;
    
    // Calculate remaining seconds by subtracting the equivalent of one hour, then taking the remainder
    Seconds = (Num - 3600 ) % 60;

    // Output the results for hours, minutes, and seconds
    // cout << Hours << endl;
    // cout << Minutes << endl;
    // cout << Seconds << endl;

    // Display the result in H:M:S format
    cout << endl << "H:M:S - "  << Hours << ":" << Minutes << ":" << Seconds << "."<< endl; 

    return 0; // Indicate that the program ended successfully
}
