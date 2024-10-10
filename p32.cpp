//Write a program to illustrate the use of put(), get() and getline() functions for Text mode Input/Output. 

#include <iostream>
#include<conio.h>
#include <string>
Using namespace std;
int main() {
    char character;
    cout << "Enter a character: ";
    character = cin.get();  // Reads one character from the input
    cout << "You entered: ";
    cout.put(character);     // Outputs the single character

    // Consume the newline character left behind by get()
    cin.ignore();

    // Using get() to read a single character again
    cout << "\nEnter another character: ";
    character = cin.get();  // Reads another character from the input
    cout << "You entered: ";
    cout.put(character);     // Outputs the single character again

    // Using getline() to read a full line of text
    cin.ignore();  // Ignore any leftover newline characters from previous input
    string line;
    cout << "\nEnter a line of text: ";
    getline(cin, line);  // Reads an entire line of text including spaces
    scout << "You entered: " << line << std::endl;
    return 0;
}

