//
//  main.cpp
//  class activity 06
//
//  Created by Isaac Adeleke on 9/15/24.
//

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

