#include <iostream>
#include <limits>
using namespace std;

int readNumber()
{
    int number = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (cin.fail())
    {
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> number;
    }

    return number;
}

bool isEven(int number)
{
    return number % 2 == 0;
}

void printNumberType(bool isEvenNumber)
{
    if (isEvenNumber)
        cout << "Even";
    else
        cout << "Odd";
}

int main()
{
    printNumberType(isEven(readNumber()));
    return 0;
}
