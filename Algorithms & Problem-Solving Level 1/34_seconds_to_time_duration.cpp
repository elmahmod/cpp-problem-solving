#include <iostream>
using namespace std;

int readPositiveNumber(const string &message = "")
{
    int number = 0;
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

struct stTimeDuration
{
    int days, hours, minutes, seconds;
};

stTimeDuration secondsToTimeDuration(int totalSeconds) // must be integer for (%)
{
    stTimeDuration td;
    int remainder = totalSeconds;

    td.days = remainder / (24 * 60 * 60);    // Seconds → Days
    remainder = remainder % (24 * 60 * 60);  // Remaining seconds after extracting days

    td.hours = remainder / (60 * 60);        // Remaining seconds → Hours
    remainder = remainder % (60 * 60);       // Remaining seconds after extracting hours

    td.minutes = remainder / 60;             // Remaining seconds → Minutes
    td.seconds = remainder % 60;             // Remaining seconds → Seconds

    return td;

    return td;
}

void printTimeDuration(stTimeDuration td)
{
    cout << td.days   << ":"
        << td.hours   << ":"
        << td.minutes << ":"
        << td.seconds
        << endl;
}

int main()
{
    int totalSeconds = readPositiveNumber("Enter total seconds: ");
    printTimeDuration(secondsToTimeDuration(totalSeconds));
    
    return 0;
}
