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

bool isNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

void printResult(int number)
{
    if (isNumberInRange(number, 10, 20))
        cout << number << " is valid in range\n";
    else 
        cout << number << " is invalid in range\n";
}

int main()
{
    printResult(readNumber("Enter a number: "));
    return 0;
}
