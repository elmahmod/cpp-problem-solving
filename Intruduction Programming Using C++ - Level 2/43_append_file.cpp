#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // open file for writing + append (does NOT delete old content, adds at the end)
    // or
    // ofstream file("a.txt", ios::app);
    fstream file("libs/test.txt", ios::out | ios::app);
    if (file.is_open())
    {
        file << "new hi" << endl;
        file.close();
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
    return 0;
}
