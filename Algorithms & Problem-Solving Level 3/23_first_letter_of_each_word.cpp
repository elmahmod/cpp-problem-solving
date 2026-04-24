#include <iostream>
using namespace std;

void printFirstLettersOfWords(string word)
{
    bool isFirstLetter = true;
    for (int i  = 0; i < word.length(); i++)
    {
        if (isFirstLetter && word[i] != ' ')
        {
            cout << word[i] << "\n";
        }
        isFirstLetter = (word[i] == ' ');
    }
}

int main()
{
    printFirstLettersOfWords("my name is muhammed");
    return 0;
}
