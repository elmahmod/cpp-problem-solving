#include <iostream>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main()
{
    if (isVowel('a'))
        cout << "is vowel.\n";
    else
        cout << "is not vowel.\n";
    return 0;
}
