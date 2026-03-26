#include <iostream>
using namespace std;

float readPositiveNumber(const string &message = "")
{
    float number = 0;
    cout << message;
    cin >> number;
    while (cin.fail() || number < 0)
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

float calculateServiceFee(float totalBill)
{
    return totalBill * 0.10;
}

float calculateSalesTax(float totalBill)
{
    return totalBill * 0.16;
}

void printResult(float totalBill)
{
    float result, service, tax;

    service = calculateServiceFee(totalBill);
    tax = calculateSalesTax(totalBill);
    result = totalBill + service + tax;

    cout << "\nTotal bill: " << totalBill << endl;
    cout << "Service Fee (10%): " << service << endl;
    cout << "Sales Tax (16%): " << tax << endl;
    cout << "Total after fees and tax: " << result << endl;

}

int main()
{
    float totalBill = readPositiveNumber("Enter total bill: ");
    printResult(totalBill);
    return 0;
}
