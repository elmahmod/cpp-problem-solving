#include <iostream>
#include <limits>
using namespace std;

void whileLoopExample()
{
    // print 1 to 5
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }
}

int readPositiveNumber()
{
    int number = 0;
    cout << "Enter a positive number: ";
    cin >> number;

    while (number < 0 || cin.fail())
    {
        cout << "invalid input, enter positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> number;
    }
    return number;
}

int readNumberInRange(int from, int to)
{
    int number = 0;
    cout << "Enter a number between " << from << " - " << to << ": ";
    cin >> number;

    while (number < from || number > to || cin.fail())
    {
        cout << "Invalid input! Please try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> number;
    }
    return number;
}

int main()
{
    whileLoopExample();
    cout << endl;
    
    int number = readPositiveNumber();
    cout << "positive number = " << number << endl;

    int rangedNumber = readNumberInRange(10, 20);
    cout << "number between (10-20) = " << rangedNumber << endl;

    cin.get();
    return 0;
}
