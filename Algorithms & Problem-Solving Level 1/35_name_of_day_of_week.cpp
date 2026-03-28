#include <iostream>
using namespace std;

enum enDays
{
    Sun = 1,
    Mon,
    Tues,
    Wed,
    Thurs,
    Fri,
    Satur
};

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

int readNumberInRange(const string& message, int from, int to) // very helpful function
{
    int number = readNumber(message);

    while (number < from || number > to)
    {
        number = readNumber("must be between " + to_string(from) + "-" + to_string(to) + ": ");
    }
    return number;
}

enDays readDays()
{
    return static_cast<enDays>(readNumberInRange("Enter your day: ", 1, 7));
}

string getDayName(enDays day)
{
    const string arr[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"}; // new skill replacing switch
    return arr[day - 1];
}

void showDaysMenu()
{
    cout << string(35, '=') << endl;
    cout << "\tDays of the week\n";
    cout << string(35, '-') << endl;
    cout << "[1] Sunday\n";
    cout << "[2] Monday\n";
    cout << "[3] Tuesday\n";
    cout << "[4] Wednesday\n";
    cout << "[5] Thursday\n";
    cout << "[6] Friday\n";
    cout << "[7] Saturday\n";
    cout << string(35, '-') << endl;
}

int main()
{
    enDays day;
    showDaysMenu();
    day = readDays();

    cout << "\nDay is: " << getDayName(day) << endl;

    return 0;
}
