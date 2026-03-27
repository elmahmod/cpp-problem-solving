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

// perfect number = sum(all divisors)
bool isPerfectNumber(int number)
{
    if (number <= 1)
        return false;

    int sum = 0;
    for (int i = 1; i <= number / 2; i++) // (number / 2) is fast
    {
        if (number % i == 0)
            sum += i;
    }

    return sum == number;
}

int main()
{
    int number = readNumber("Enter a number: ");

    if (isPerfectNumber(number))
        cout << number << " is perfect\n";
    else
        cout << number << " is not perfect\n";
    return 0;
}
