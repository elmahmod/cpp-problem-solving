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

void printNumberPattern(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << i;
        }
        cout << endl;
    }
}   

int main()
{
    printNumberPattern(readPositiveNumber("Enter a number: "));
    return 0;
}
