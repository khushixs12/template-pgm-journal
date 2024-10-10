//Write a program to illustrate the use of manipulators in file handling 

#include <iostream>
#include <fstream>
#include <iomanip>  // For manipulators 

int main() {
    // Open a file for writing (text mode)
    std::ofstream outFile("formatted_output.txt");

    if (!outFile) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    // Writing formatted data to the file
    outFile << "Using manipulators in file handling:" << std::endl;
    
    // Setting width and fill for numbers
    outFile << std::setw(10) << std::setfill('*') << 123 << std::endl;  // Width 10, filled with '*'
    
    // Using setprecision to control the number of decimal places
    outFile << std::setw(10) << std::setprecision(3) << std::fixed << 3.14159 << std::endl;  // Fixed format with 3 decimals

    // Using scientific format for a floating-point number
    outFile << std::setw(10) << std::setprecision(4) << std::scientific << 12345.6789 << std::endl;  // Scientific format
    
    // Using left alignment
    outFile << std::left << std::setw(15) << "Left Align" << std::endl;

    // Close the file after writing
    outFile.close();
    std::cout << "Formatted data written to formatted_output.txt" << std::endl;
 // Open the file for reading (text mode)
    std::ifstream inFile("formatted_output.txt");
       if (!inFile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    // Reading and displaying the formatted content
    std::cout << "\nContents of formatted_output.txt:" << std::endl;
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file after reading
    inFile.close();

    return 0;
}


