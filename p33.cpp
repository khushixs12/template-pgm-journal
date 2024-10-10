//Write a program to illustrate the use of read() and write() functions for Binary mode Input/Output. 

#include <iostream>
#include <fstream>

int main() {
    // Data to be written to the binary file
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Writing to a binary file using write()
    std::ofstream outFile("binary_data.dat", std::ios::binary);
    if (!outFile) {
        std::cerr << "Error opening file for writing!" << std::endl;
        return 1;
    }

    // Writing the array to the file
    outFile.write(reinterpret_cast<char*>(numbers), sizeof(numbers));

    // Close the output file
    outFile.close();
    std::cout << "Data written to binary_data.dat successfully.\n";

    // Reading from the binary file using read()
    int readNumbers[5] = {0};  // Array to store the read data

    std::ifstream inFile("binary_data.dat", std::ios::binary);
    if (!inFile) {
        std::cerr << "Error opening file for reading!" << std::endl;
        return 1;
    }

    // Reading the data from the file into the array
    inFile.read(reinterpret_cast<char*>(readNumbers), sizeof(readNumbers));

    // Close the input file
    inFile.close();

    // Displaying the read data
    std::cout << "Data read from binary_data.dat:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << readNumbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

