#include <iostream>
using namespace std;

long long factorial(int number)
{
    long long result = 1;
    for (int i = 1; i <= number; i++)
        result *= i;
    return result;
}

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
            cout << "Input must be positive, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }
    cin.ignore(1000, '\n');
    return number;
}

void printFactorial(int number)
{
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;
}

int main()
{
    int number = readPositiveNumber("Enter a number: ");
    
    printFactorial(number);

    return 0;
}
