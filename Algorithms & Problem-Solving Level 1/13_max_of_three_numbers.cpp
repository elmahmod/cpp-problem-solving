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

void readThreeNumbers(int& num1, int& num2, int& num3) 
{
    num1 = readNumber("Enter number 1 :");
    num2 = readNumber("Enter number 2 : ");
    num3 = readNumber("Enter number 3 : ");
}

int getMaxNumber(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;
    else if (num2 > num3)
        return num2;
    else
        return num3;
}

void printResult(int maxValue)
{
    cout << "\nmax value is: " << maxValue << endl;
}

int main()
{
    // in clean-way
    int num1,num2,num3;
    readThreeNumbers(num1, num2, num3);
    printResult(getMaxNumber(num1, num2, num3));
    return 0;
}
