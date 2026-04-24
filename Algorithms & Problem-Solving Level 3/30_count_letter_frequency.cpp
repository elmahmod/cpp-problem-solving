#include <iostream>
#include <cctype>
using namespace std;

int countLetterFrequency(const string &word, char target)
{
    int counter = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (tolower(word[i]) == tolower(target))
            counter++;
    }
    return counter;
}

int main()
{
    string word = "AaaaAbbCcDD";
    cout << countLetterFrequency(word, 'c') << endl;
    cout << countLetterFrequency(word, 'a') << endl;
    cout << countLetterFrequency(word, 'd') << endl;
    return 0;
}
