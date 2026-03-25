#include <iostream>
using namespace std;

int readNumber(const string& message = "")
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

int getMaxNumber(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2;
}

int main()
{
    int num1, num2;
    num1 = readNumber();
    num2 = readNumber();
    int maxValue = getMaxNumber(num1, num2);

    cout << "max number is: " << maxValue << endl;
    return 0;
}
