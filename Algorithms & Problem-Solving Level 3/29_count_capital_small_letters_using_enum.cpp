#include <iostream>
#include <cctype>
using namespace std;

enum CaseType { Lower, Upper, All };

int countLetters(const string& word, CaseType caseType = All)
{
    int counter = 0;

    for (int i = 0; i < word.length(); i++)
    {
        if (caseType == All && isalpha(word[i]))
            counter++;
        else if (caseType == Lower && islower(word[i]))
            counter++;
        else if (caseType == Upper && isupper(word[i]))
            counter++;
    }

    return counter;
}

int main()
{
    string word = "AbCD 123!";

    cout << "small letters count: "
         << countLetters(word, Lower) << endl;

    cout << "capital letters count: "
         << countLetters(word, Upper) << endl;

    cout << "all letters count: "
         << countLetters(word) << endl;

    return 0;
}
