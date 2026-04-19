#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void writeFileLines(const string &fileName, const vector<string> &vFileContent)
{
    ofstream file(fileName);

    if (file.is_open())
    {
        for (const string &line : vFileContent)
        {
            if (!line.empty())
                file << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "Error opening file!" << endl;
    }
}

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

void deleteFileLine(const string &fileName, string target)
{
    vector<string> vFileContent;
    readFileLines(fileName, vFileContent);
    for (string &line : vFileContent)
    {
        if (line == target)
            line = "";
    }
    writeFileLines(fileName, vFileContent);
}

int main()
{
    deleteFileLine("libs/test.txt", "ali");
    return 0;
}
