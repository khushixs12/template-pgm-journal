//Write a program to illustrate the use of file pointer manipulation functions 
#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file for writing
    std::ofstream outFile("file_pointer_example.txt");

    if (!outFile) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    // Write some data to the file
    outFile << "Hello, this is a file pointer manipulation example.\n";
    outFile << "We will demonstrate seekg(), seekp(), tellg(), and tellp().\n";
    
    // Close the output file
    outFile.close();
    std::cout << "Data written to file successfully.\n";

    // Open the file for reading
    std::ifstream inFile("file_pointer_example.txt");

    if (!inFile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    // Display the initial position of the get pointer
    std::cout << "Initial position of get pointer (tellg): " << inFile.tellg() << std::endl;

    // Read first line from the file
    std::string line;
    std::getline(inFile, line);
    std::cout << "Read line: " << line << std::endl;

    // Check the current position of the get pointer
    std::cout << "Current position of get pointer after reading the first line (tellg): " << inFile.tellg() << std::endl;

    // Use seekg() to move the file pointer to the beginning
    inFile.seekg(0, std::ios::beg);  // Move the pointer to the beginning of the file
    std::cout << "Position of get pointer after seekg to beginning (tellg): " << inFile.tellg() << std::endl;

    // Read the first line again
    std::getline(inFile, line);
    std::cout << "Read line after seekg: " << line << std::endl;

    // Use seekg() to move the pointer to the end of the file
    inFile.seekg(0, std::ios::end);  // Move the pointer to the end of the file
    std::cout << "Position of get pointer after seekg to end (tellg): " << inFile.tellg() << std::endl;

    // Open the file for writing in append mode
    std::ofstream outFileAppend("file_pointer_example.txt", std::ios::app);

    if (!outFileAppend) {
        std::cerr << "Error opening file for appending!" << std::endl;
        return 1;
    }

    // Use seekp() to move the put pointer to the beginning of the file and overwrite the content
    outFileAppend.seekp(0, std::ios::beg);
    outFileAppend << "Overwritten first line of text.\n";
    
    // Move the put pointer to the end of the file for appending
    outFileAppend.seekp(0, std::ios::end);
    outFileAppend << "This is an additional line appended at the end.\n";

    // Close the file after writing
    outFileAppend.close();

    // Close the file after reading
    inFile.close();
    std::cout << "File operations completed successfully.\n";

    return 0;
}
