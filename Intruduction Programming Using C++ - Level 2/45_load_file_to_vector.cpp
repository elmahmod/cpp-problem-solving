#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void readFileLines(const string &fileName, vector<string> &vFileContent)
{
    ifstream file(fileName);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
            vFileContent.push_back(line);

        file.close();
    }
    else
    {
        cout << "File not found!\n";
    }
}

int main()
{
    vector<string> vFileContent;
    readFileLines("libs/test.txt", vFileContent);

    for (const string &line : vFileContent)
        cout << line << endl;

    return 0;
}
