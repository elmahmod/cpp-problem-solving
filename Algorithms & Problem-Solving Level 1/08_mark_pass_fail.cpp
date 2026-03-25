#include <iostream>
using namespace std;

enum enMark
{
    fail = 0,
    pass = 1
};

int readNumber(string message)
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
    return number;
}

enMark checkMark(int grade)
{
    return (grade >= 50) ? pass : fail;
}

void printResult(int grade)
{
    if (checkMark(grade) == pass)
        cout << "passed" << endl;
    else
        cout << "failed" << endl;
}

int main()
{
    printResult(readNumber("Enter your mark: "));
    return 0;
}
