#include <iostream>
using namespace std;

void continueStatementExample()
{
    cout << "=== for loop ===\n";
    for (int i = 1; i <= 5; i++)
    {
        if (i == 3)
            continue;

        cout << i << endl;
    }
}

int readNumber(string message)
{
    int number = 0;
    cout << message;
    cin >> number;
    return number;
}

int sumNumbersBelow50()
{
    int sum = 0;
    int number = 0;

    for (int i = 0; i < 5; i++)
    {
        number = readNumber("Enter number [" + to_string(i + 1) + "]: ");

        if (number >= 50)
        {
            cout << "The number is greater than or equal to 50 it won't be added\n";
            continue;
        }
        sum += number;
    }
    return sum;
}

int main()
{
    continueStatementExample();
    cout << endl;

    int result = sumNumbersBelow50();
    cout << "\nSum of numbers below 50 is: " << result << endl;

    cin.get();
    return 0;
}
