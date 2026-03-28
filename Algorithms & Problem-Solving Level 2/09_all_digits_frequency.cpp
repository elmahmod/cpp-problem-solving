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

void printAllDigitsFrequency(int number)
{
    for (int i = 0; i <= 9; i++)
    {
        int frequency = digitFrequency(number, i);
        if (frequency > 0)
            cout << "Digit " << i << " Frequency is " << frequency << " Time(s)\n";
    }
}

int main()
{
    int number = readPositiveNumber("Enter a number: ");
    printAllDigitsFrequency(number);
    return 0;
}
