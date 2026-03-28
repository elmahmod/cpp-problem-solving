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

int readDigit(const string &messages) // new constant function
{
    int digit = 0;
    cout << messages;
    cin >> digit;

    while(cin.fail() || digit < 0 || digit > 9)
    {
        if (cin.fail())
            cout << "Invalid input, try again: ";
        else
            cout << "Enter a single digit (0-9): ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> digit;
    }
    cin.ignore(1000, '\n');
    return digit;
}

int digitFrequency(int number, int target)
{
    int count = 0, remainder = 0;
    
    while (number > 0)
    {
        remainder = number % 10;
        number /= 10;

        if (remainder == target)
            count++;
    }
    return count;
}

int main()
{
    int number = readPositiveNumber("Enter a number: ");
    int target = readDigit("Enter a digit (0-9): ");
    cout << "\nDigit " << target << " Frequency is " << digitFrequency(number, target) << " Time(s)\n";
    return 0;
}
