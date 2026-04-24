#include <iostream>
#include <cctype>
using namespace std;

int countUpperCaseLetters(const string &word)
{
    int counter = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
            counter++;
    }
    return counter;
}

int countLowerCaseLetters(const string &word)
{
    int counter = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (islower(word[i]))
            counter++;
    }
    return counter;
}

int main()
{
    string word = "AbCD";

    cout << "small letters count: "
         << countLowerCaseLetters(word) << endl;

    cout << "capital letters count: "
         << countUpperCaseLetters(word) << endl;

    return 0;
}
