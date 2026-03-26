#include <iostream>
using namespace std;

struct stTimeDuration
{
    float days, hours, minutes, seconds;
};

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

stTimeDuration readTimeDuration()
{
    stTimeDuration td;
    td.days = readPositiveNumber("Enter days: ");
    td.hours = readPositiveNumber("Enter hours: ");
    td.minutes = readPositiveNumber("Enter minutes: ");
    td.seconds = readPositiveNumber("Enter seconds: ");
    return td;
}

float timeDurationToSeconds(const stTimeDuration &td)
{
    float totalSeconds;
    totalSeconds =
        td.days * 24 * 60 * 60 
        + td.hours * 60 * 60 
        + td.minutes * 60 
        + td.seconds;
    return totalSeconds;
}

int main()
{
    float totalSeconds = timeDurationToSeconds(readTimeDuration());
    cout << "\nTotal seconds: " << totalSeconds << endl;
    return 0;
}
