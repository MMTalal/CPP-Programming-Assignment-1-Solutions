#include <iostream> // Include the library for input and output operations
using namespace std; // Use the standard namespace to simplify code

int main() {
    // Display the assignment title and instructions to the user
    cout << "This is Assignment No. 4;" << endl
         << endl
         << "Write a program to compute the perimeter and area of a rectangle. Your code should ask the user to insert the width and the height." << endl;

    // Prompt the user to input the height of the rectangle
    cout << "Input height of the rectangle by meter please: ";
    int Height; // Declare a variable to store the height of the rectangle
    cin >> Height; // Get the height input from the user

    // Prompt the user to input the width of the rectangle
    cout << "Input width of the rectangle by meter please: ";
    int Width; // Declare a variable to store the width of the rectangle
    cin >> Width; // Get the width input from the user

    // Calculate and display the perimeter of the rectangle
    cout << endl << "The perimeter = " << (Height + Width) * 2 << " meter." << endl;

    // Calculate and display the area of the rectangle
    cout << "The area = " << Height * Width << " meter." << endl;

    return 0; // Indicate that the program ended successfully
}
