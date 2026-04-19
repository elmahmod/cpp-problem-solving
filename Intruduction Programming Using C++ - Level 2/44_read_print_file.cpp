#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printFile(string fileName)
{
    fstream file(fileName, ios::in);
    // or
    // ifsteam file(fillName);

    if (file.is_open())
    {
        string line;
        while (getline(file, line))
            cout << line << endl;

        file.close();
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

int main()
{
    printFile("libs/test.txt");
    return 0;
}
