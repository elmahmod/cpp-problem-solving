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

int main()
{
    vector<string> vFileContent = {"hi", "helo", "hala", "hoyo"};
    writeFileLines("libs/test.txt", vFileContent);
    return 0;
}
