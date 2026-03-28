#include <iostream>
using namespace std;

int readPositiveNumber(const string &message = "")
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

int sumOfDigits(int number)
{
    int sum = 0, remainder = 0;

    while (number > 0)
    {
        remainder = number % 10;
        number /= 10;

        sum += remainder;
    }
    return sum;
}

int main()
{
    int number = readPositiveNumber("Enter a number: ");
    cout << "sum of digits: " << sumOfDigits(number) << endl;
    return 0;
}
