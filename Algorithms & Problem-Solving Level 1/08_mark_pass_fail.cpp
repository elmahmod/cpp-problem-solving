#include <iostream>
using namespace std;

enum enMark
{
    Fail = 0,
    Pass = 1
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
    return (grade >= 50) ? Pass : Fail;
}

void printResult(int grade)
{
    if (checkMark(grade) == Pass)
        cout << "passed" << endl;
    else
        cout << "failed" << endl;
}

int main()
{
    printResult(readNumber("Enter your mark: "));
    return 0;
}
