#include <iostream>
#include <string>
#include <vector>
using namespace std;

string join(const vector<string>& vTokens,const  string& delimiter = " ")
{
    string text;
    for (const string& token: vTokens)
    {
        text += token + delimiter;
    }
    return text.substr(0, text.length() - delimiter.length());
}

int main()
{
    vector<string> vString = {"my", "name", "is", "muhammed"};
    string text = join(vString, "#_#");
    cout << text << endl;
    return 0;
}
