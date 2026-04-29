#include <iostream>
#include <string>
using namespace std;

void printEachWord(string text)
{
    const string delimiter = " ";
    string word;
    size_t pos = 0;

    while ((pos = text.find(delimiter)) != string::npos)
    {
        word = text.substr(0, pos); // string substr (start, length)

        if (!word.empty())
            cout << word << endl;

        text.erase(0, pos + delimiter.length()); // string.erase(start, length)
    }

    if (!text.empty())
        cout << text << endl;
}

int main()
{
    printEachWord("muhammed el mahmud");
    return 0;
}
