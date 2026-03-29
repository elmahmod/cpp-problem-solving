#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enCharacterType
{
    SmallLetter,
    CapitalLetter,
    SpecialLetter,
    Digit
};

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

char getRandomCharacter(enCharacterType charType)
{
    switch (charType)
    {
    case SmallLetter:
        return (char)randomNumber('a', 'z');

    case CapitalLetter:
        return (char)randomNumber('A', 'Z');

    case SpecialLetter:
        return (char)randomNumber(33, 47);

    case Digit:
        return (char)randomNumber('0', '9');

    default:
        return '\0';
    }
}

int main()
{
    srand((unsigned)time(NULL));

    cout << "Random characters\n";
    cout << getRandomCharacter(SmallLetter) << endl;
    cout << getRandomCharacter(CapitalLetter) << endl;
    cout << getRandomCharacter(SpecialLetter) << endl;
    cout << getRandomCharacter(Digit) << endl;

    return 0;
}
