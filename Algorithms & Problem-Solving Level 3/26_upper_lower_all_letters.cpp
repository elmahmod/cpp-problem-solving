#include <iostream>
#include <cctype>
using namespace std;

string toLowerCase(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = tolower(word[i]);
    }
    return word;
}

string toUpperCase(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = toupper(word[i]);
    }
    return word;
}

int main()
{
    string name = "MuhaMed El MahMuD";

    cout << toLowerCase(name) << endl;
    cout << toUpperCase(name) << endl;

    return 0;
}
