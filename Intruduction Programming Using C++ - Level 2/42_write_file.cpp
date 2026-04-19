#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Open file in write mode (old content will be deleted)
    // In wirte mode will creating the file if it doesn't exist
    fstream file("libs/test.txt", ios::out); // ios(input output stream)
    // or
    // ofstream file("a.txt");

    // Check if file opened successfully
    if (file.is_open())
    {
        // Write to the file
        file << "hi" << endl;
        file << "hi" << endl;

        // Close the file
        file.close();
    }
    else
    {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
