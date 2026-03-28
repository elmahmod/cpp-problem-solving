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

int readNumberInRange(int from, int to)
{
    int number = 0;
    number = readNumber("Enter number between " + to_string(from) + " and " + to_string(to) + ": ");

    while (!isNumberInRange(number, from, to))
    {
        number = readNumber("must be between " + to_string(from) + "-" + to_string(to) + ": ");
    }
    return number;
}

void printResult(int number)
{
    cout << "your number is: " << number << endl;
}

int main()
{
    printResult(readNumberInRange(50, 100));
    return 0;
}
