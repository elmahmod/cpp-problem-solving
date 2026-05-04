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

string join(const vector<string> &vTokens, const string &delimiter = " ")
{
    string text;
    for (const string &token : vTokens)
    {
        text += token + delimiter;
    }

    if (text.empty()) // checking
        return "";

    return text.substr(0, text.length() - delimiter.length());
}

string toLowerCase(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }
    return word;
}

string replaceWords(const string &text, const string &word, const string &replaceTo, bool matchCase = true)
{
    vector<string> vTokens = split(text, " ");
    for (string &n : vTokens)
    {
        if (matchCase)
        {
            if (n == word)
                n = replaceTo;
        }
        else
        {
            if (toLowerCase(n) == toLowerCase(word))
                n = replaceTo;
        }
    }
    return join(vTokens, " ");
}

int main()
{
    cout << replaceWords("my name is muhammed", "muhammed", "ibrahim") << endl;
    return 0;
}
