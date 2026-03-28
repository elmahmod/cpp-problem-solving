#include <iostream>
using namespace std;

enum enMonths
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
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

int readNumberInRange(const string &message, int from, int to)
{
    int number = readNumber(message);

    while (number < from || number > to)
    {
        number = readNumber("Must be between " + to_string(from) + "-" + to_string(to) + ": ");
    }
    return number;
}

enMonths readMonth()
{
    return static_cast<enMonths>(readNumberInRange("Enter your month: ", 1, 12));
}

string getMonthName(enMonths month)
{
    const string arr[] = {"January", "February", "March", "April", "May", "June",
                          "July", "August", "September", "October", "November", "December"};
    return arr[month - 1];
}

void showMonthsMenu()
{
    cout << string(35, '=') << endl;
    cout << "\tMonths of the year\n";

    cout << string(35, '-') << endl;
    for (int i = 1; i <= 12; i++) // new skill
        cout << "[" << i << "] " << getMonthName(static_cast<enMonths>(i)) << endl;
    cout << string(35, '-') << endl;
}

int main()
{
    showMonthsMenu();
    enMonths month = readMonth();

    cout << "\nMonth is: " << getMonthName(month) << endl;

    return 0;
}
