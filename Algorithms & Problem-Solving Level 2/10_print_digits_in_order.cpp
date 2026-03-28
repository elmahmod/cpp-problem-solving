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

int reverseNumber(int number)
{
    int reverse = 0, remainder = 0;

    while (number > 0)
    {
        remainder = number % 10;
        number /= 10;

        reverse = reverse * 10 + remainder;
    }
    return reverse;
}

void printDigits(int number)
{
    int remainder = 0;

    while (number > 0)
    {
        remainder = number % 10; 
        number /= 10;            
        cout << remainder << endl;
    }
}

int main()
{
    int number = readPositiveNumber("Enter a number: ");
    printDigits(reverseNumber(number));
    return 0;
}
