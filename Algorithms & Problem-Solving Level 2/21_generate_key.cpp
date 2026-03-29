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

int readPositiveInt(const string &message = "") // renamed
{
    int number = 0;

    cout << message;
    cin >> number;

    while (cin.fail() || number < 1)
    {
        if (cin.fail())
            cout << "Invalid input, try again: ";
        else
            cout << "Number must be positive, try again: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }

    cin.ignore(1000, '\n');
    return number;
}

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

string generateWord(enCharacterType charType, int lettersLength)
{
    string word = "";

    for (int i = 0; i < lettersLength; i++)
    {
        word += getRandomCharacter(charType);
    }

    return word;
}

string generateKey()
{
    string key = "";

    for (int i = 0; i < 4; i++)
    {
        key += generateWord(CapitalLetter, 4) + '-';
    }

    return key.substr(0, key.length() - 1); // remove last '-'
}

void printGeneratedKeys(int numberOfKeys)
{
    for (int i = 1; i <= numberOfKeys; i++)
    {
        cout << "Key [" << i << "]: " << generateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));

    printGeneratedKeys(readPositiveInt("Enter how many keys you want: "));

    return 0;
}
