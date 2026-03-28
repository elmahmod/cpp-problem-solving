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

void printDigits(int number)
{
    int remainder = 0;

    while (number > 0)
    {
        remainder = number % 10; // contain the last digit
        number /= 10;            // remove the last digit
        cout << remainder << endl;
    }
}

int main()
{
    printDigits(readPositiveNumber("Enter a number: "));
    return 0;
}
