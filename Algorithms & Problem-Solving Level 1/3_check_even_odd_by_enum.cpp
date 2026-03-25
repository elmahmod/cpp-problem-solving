#include <iostream>
#include <limits>
using namespace std;

enum enNumberType
{
    odd = 1,
    even = 2
};

int readNumber()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (cin.fail())
    {
        cout << "invalid input, try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> number;
    }
    return number;
}

enNumberType checkNumberType(int number)
{
    // advanced
    return number % 2 == 0 ? even : odd; // use if statement
}

// do you think this one is better?
void printNumberType_better(int number)
{
    if (checkNumberType(number) == even)
    {
        cout << number << " is even\n";
    }
    else
        cout << number << " is odd\n";
}

void printNumberType(enNumberType numberType)
{
    if (numberType == even)
        cout << "even";
    else
        cout << "odd";
}

int main()
{
    printNumberType(checkNumberType(readNumber()));

    // printNumberType_better(readNumber()); 
    return 0;
}
