#include <iostream>
using namespace std;

int readNumber(const string &message = "")
{
    int number = 0;
    cout << message;
    cin >> number;
    while (cin.fail())
    {
        cout << "Invalid input, try again: ";
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

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int number = readNumber("Enter a number: ");
    if (isPrimeNumber(number))
        cout << "\nis prime" << endl;
    else
        cout << "\nis not prime" << endl;
    return 0;
}
