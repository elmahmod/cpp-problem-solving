#include <iostream>
using namespace std;

void doWhileExample()
{
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 5);
}

int readPositiveNumber() 
{
    int number = 0;

    do
    {
        cout << "Enter positive number: ";
        cin >> number;
    } while (number < 0);
    return number;
}

int readNumberInRange(int from, int to)
{
    int number = 0;

    do
    {
        cout << "Enter a number between " << from << " - " << to << ": ";
        cin >> number;

    } while (number < from || number > to);
    return number;
}

int main()
{
    doWhileExample();
    cout << endl;

    int rangedNumber = readNumberInRange(50, 100);
    cout << "number in range (50-100) = " << rangedNumber << endl;

    int positiveNumber = readPositiveNumber();
    cout << "positive number = " << positiveNumber << endl;
    
    cin.get();
    return 0;
}
