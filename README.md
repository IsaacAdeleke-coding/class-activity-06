# Class Activity 06: User Address Formatter

This C++ program prompts the user to input their street, city, state, and ZIP code. The program then formats and displays the full address in a structured format.

## Program Overview

1. The program asks the user to input their street, city, state, and ZIP code.
2. It stores the information in string variables.
3. The program then prints the address in the following format:

Street City, State, ZIP code

### Code Snippet

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
 // Variables to store user input
 string street, city, state, zipCode;

 // Asking the user for inputs
 cout << "Enter your street: ";
 getline(cin, street);

 cout << "Enter your city: ";
 getline(cin, city);

 cout << "Enter your state: ";
 getline(cin, state);

 cout << "Enter your ZIP code: ";
 getline(cin, zipCode);

 // Printing the address in the specified format
 cout << "\nYour address is:\n";
 cout << street << endl;
 cout << city << ", " << state << ", " << zipCode << "." << endl;

 return 0;
}


Example Input/Output
Example:

Enter your street: 123 Maple St
Enter your city: Springfield
Enter your state: IL
Enter your ZIP code: 62704

Your address is:
123 Maple St
Springfield, IL, 62704.


How to Compile and Run

To compile the program, use the following command:

g++ main.cpp -o AddressFormatter

To run the compiled program, use:

Features

Accepts user input for street, city, state, and ZIP code.
Formats the address in a clear and structured manner.
Outputs the complete address to the console.
