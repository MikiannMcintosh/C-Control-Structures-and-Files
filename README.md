# C-Writing-a-File

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Creates the Output Stream Object
    ofstream outputFile;

    // Create And/Or Open File
    outputFile.open("demo.txt");

    // Send a message to the console
    cout << "Writing to the file" << endl;

    outputFile << "CIS2200\n";
    outputFile << "CIS3100\n";
    outputFile << "CIS3120\n";
    outputFile << "CIS3500";
    outputFile << "CIS3510";

    outputFile.close();

    cout << "Done";

    return 0;
}
