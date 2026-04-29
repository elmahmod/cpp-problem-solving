#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string s, const string &delimiter)
{
    vector<string> vWords;
    size_t pos;
    string word;

    while ((pos = s.find(delimiter)) != string::npos)
    {
        word = s.substr(0, pos);
        if (!word.empty())
            vWords.push_back(word);
        s.erase(0, pos + delimiter.length());
    }
    if (!s.empty())
        vWords.push_back(s);

    return vWords;
}

int main()
{
    vector<string> vWords = split("hello,my,friend", ",");
    for (const string &n : vWords)
    {
        cout << n << endl;
    }
    return 0;
}
