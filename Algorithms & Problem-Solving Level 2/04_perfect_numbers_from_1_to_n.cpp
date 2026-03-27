#include <iostream>
using namespace std;

int readPositiveNumber(const string &message = "")
{
    int number = 0;
    cout << message;
    cin >> number;

    while (cin.fail() || number < 1) // fixed
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

bool isPerfectNumber(int number)
{
    if (number <= 1)
        return false;

    int sum = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
            sum += i;
    }

    return sum == number;
}

void printPerfectNumbers(int number)
{
    cout << "\nPerfect Numbers From 1 to " << number << " are: ";
    for (int i = 1; i <= number; i++)
    {
        if (isPerfectNumber(i))
            cout << i << "  ";
    }
}

int main()
{
    printPerfectNumbers(readPositiveNumber("Enter a positive number: "));
    return 0;
}
