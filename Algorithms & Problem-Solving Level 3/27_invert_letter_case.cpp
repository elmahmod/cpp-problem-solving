#include <iostream>
#include <cctype>
using namespace std;

char invertLetterCase(char letter)
{
    return isupper(letter) ? tolower(letter) : toupper(letter);
}

string toggleCase(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        word[i] = invertLetterCase(word[i]);
    }
    return word;
}

int main()
{
    string name = "MuhaMed El MahMuD";

    cout << toggleCase(name) << endl;

    return 0;
}
