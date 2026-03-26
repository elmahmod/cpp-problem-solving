#include <iostream>
using namespace std;

float readPositiveNumber(const string &message = "")
{
    float number = 0;
    cout << message;
    cin >> number;
    while (cin.fail() || number < 0) // non-negative
    {
        if (cin.fail())
            cout << "Invalid input, try again: ";
        else
            cout << "Input must be positive, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }
    cin.ignore(1000, '\n');
    return number;
}

float calculateRemainder(float totalBill, float totalCash)
{
    return totalCash - totalBill;
}

void printResult(float totalBill, float totalCash)
{
    float result = calculateRemainder(totalBill, totalCash);
    if (totalCash < totalBill)
    {
        float need = totalBill - totalCash;
        cout << "\nNot enough cash! you need: " << need << endl;
    }
    else
        cout << "\nRemainder = " << result << endl;
}

int main()
{
    float totalBill, totalCash;
    totalBill = readPositiveNumber("Enter total bill: ");
    totalCash = readPositiveNumber("Enter total cash: ");

    printResult(totalBill, totalCash);

    return 0;
}
