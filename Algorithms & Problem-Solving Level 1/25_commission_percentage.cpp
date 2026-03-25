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

float getCommissionPercentage(int totalSales)
{
    if (totalSales >= 1000000) return 0.05;  // 5% 
    else if (totalSales >= 500000) return 0.04;  // 4%
    else if (totalSales >= 100000) return 0.03;  // 3% 
    else if (totalSales >= 50000) return 0.02;   // 2%
    else return 0.0; // %0 
}

float calculateTotalCommission(int totalSales)
{
    return totalSales * getCommissionPercentage(totalSales);
}

int main()
{
    int totalSales = readNumber("Enter total sales: ");

    float commission = calculateTotalCommission(totalSales);
    float percentage = getCommissionPercentage(totalSales);

    cout << "Total sales: " << totalSales << endl;

    cout << "Commission percentage: " << percentage << endl;
    cout << "\nCommission earned: " << commission << endl;

    return 0;
}
