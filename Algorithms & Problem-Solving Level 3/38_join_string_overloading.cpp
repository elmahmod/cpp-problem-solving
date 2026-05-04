#include <iostream>
#include <string>
#include <vector>
using namespace std;

string join(const vector<string> &vTokens, const string &delimiter = " ")
{
    string text;
    for (const string &token : vTokens)
    {
        text += token + delimiter;
    }
    return text.substr(0, text.length() - delimiter.length());
}

string join(string arr[], int size, const string &delimiter = " ")
{
    string text;

    for (int i = 0; i < size; i++)
    {
        text += arr[i] + delimiter;
    }

    return text.substr(0, text.length() - delimiter.length());
}

int main()
{
    vector<string> vString = {"my", "name", "is", "muhammed"};
    string arr[] = {"my", "name", "is", "muhammed"};

    string text = join(vString, "#_#");
    string text2 = join(arr, 4, "#_#");
    
    cout << text << endl;
    cout << text2 << endl;
    return 0;
}
