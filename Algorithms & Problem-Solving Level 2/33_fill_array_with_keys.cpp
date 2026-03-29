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

int readPositiveInt(const string &message = "")
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

string generateWord(enCharacterType charType, int wordLength)
{
    string word = "";
    for (int i = 0; i < wordLength; i++)
        word += getRandomCharacter(charType);

    return word;
}

string generateKey()
{
    string key = "";
    for (int i = 0; i < 4; i++)
        key += generateWord(CapitalLetter, 4) + '-';

    return key.substr(0, key.length() - 1);
}

void fillArrayWithKeys(string arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = generateKey();
}

void printStringArray(const string arr[], int size, const string &message = "")
{
    cout << message;
    for (int i = 0; i < size; i++)
        cout << "Array [" << i << "]: " << arr[i] << endl;

    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int size = readPositiveInt("how many keys do you want to generate: ");
    string *arr = new string[size];

    fillArrayWithKeys(arr, size);
    printStringArray(arr, size, "\n\tArray Elements\n");

    delete[] arr;
    return 0;
}
