#include <iostream>
using namespace std;

int readPositiveNumber(const string &message = "")
{
    int number = 0;
    cout << message;
    cin >> number;

    while (cin.fail() || number < 0)
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

bool isPrimeNumber(int number)
{
    if (number <= 1)
        return false;

    for (int i = 2; i * i <= number; i++) // (i * i) faster than (number / 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

void printPrimeNumbers(int number)
{
    cout << "\nPrime Numbers From 1 to " << number << " are: ";
    for (int i = 1; i <= number; i++)
    {
        if (isPrimeNumber(i))
            cout << i << "  ";
    }
}

int main()
{
    printPrimeNumbers(readPositiveNumber("Enter a number: "));
    return 0;
}
