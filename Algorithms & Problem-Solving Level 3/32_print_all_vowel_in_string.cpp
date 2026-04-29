#include <iostream>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void printVowels(string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (isVowel(text[i]))
            cout << text[i] << endl;
    }
}

int main()
{
    printVowels("muhammed");
    return 0;
}
