#include <iostream>
using namespace std;

int readPositiveNumber(const string &message = "")
{
    int number = 0;
    cout << message;
    cin >> number;
    while (cin.fail() || number < 0) // non-negative
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

long long power(int base, int M)
{
    if (M == 0)
    {
        if (base == 0)
        {
            cout << "0^0 is Undefined!\n";
            return -1;
        }
        return 1;
    }

    long long result = 1;
    for (int i = 1; i <= M; i++)
    {
        result *= base;
    }
    return result;
}

void printPower(int base, int M)
{
    long long result = power(base, M);
    if (result != -1)
        cout << base << " ^ " << M << " = " << power(base, M) << endl;
}

int main()
{
    int base = readPositiveNumber("Enter a base: ");
    int M = readPositiveNumber("Enter a power: ");

    printPower(base, M);

    return 0;
}
