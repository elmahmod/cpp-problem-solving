#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string text, const string &delimiter)
{
    vector<string> vTokens;
    size_t pos;
    string word;

    while ((pos = text.find(delimiter)) != string::npos)
    {
        word = text.substr(0, pos);

        if (!word.empty())
            vTokens.push_back(word);

        text.erase(0, pos + delimiter.length());
    }

    if (!text.empty())
        vTokens.push_back(text);

    return vTokens;
}

string reverseString(string text)
{
    vector<string> vTokens = split(text, " ");
    string reversedText;

    vector<string>::iterator iter = vTokens.end();

    while (iter != vTokens.begin())
    {
        --iter;
        reversedText += *iter + " ";
    }

    return reversedText.substr(0, reversedText.length() - 1);
}

int main()
{
    cout << reverseString("my name is muhammed") << endl;
    return 0;
}
