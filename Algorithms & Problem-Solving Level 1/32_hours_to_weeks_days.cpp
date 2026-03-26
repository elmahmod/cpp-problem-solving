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

float hoursToeWeeks(float hours)
{
    return hours / 24 / 7;
}

float hoursToteDays(float hours)
{
    return hours / 24;
}

float daysToWeeks(float days)
{
    return days / 7;
}

int main()
{
    float hours = readPositiveNumber("Enter hours: ");
    float weeks = hoursToeWeeks(hours);
    float days = hoursToteDays(hours);

    cout << "\nweeks: " << weeks << endl;
    cout << "days: " << days << endl;

    return 0;
}
