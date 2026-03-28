#include <iostream>
#include <limits>
using namespace std;

enum eDay { Sun = 1, Mon, Tue, Wed, Thu, Fri, Sat };

eDay readUserChoice()
{
    int choice = 0;
    cout << "Choose an day: ";
    cin >> choice;

    //advanced
    while (cin.fail() || choice < 1 || choice > 7)
    {
        cout << "Invalid input, try again: ";
        cin.clear(); // Reset error state (unlock cin)
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //(clean the buffer from invalid input)
        cin >> choice;
    }
    return static_cast<eDay>(choice);
}

void showDaysMenu()
{
    cout << string(25, '-');
    cout << "\n\tWeek Days\n";
    cout << string(25, '-');
    cout << "\n[1] Sunday\n";
    cout << "[2] Monday\n";
    cout << "[3] Tuesday\n";
    cout << "[4] Wednesday\n";
    cout << "[5] Thursday\n";
    cout << "[6] Friday\n";
    cout << "[7] Saturday\n";
    cout << string(25, '_') << endl;
}

string getDayName(eDay day)
{
    switch(day)
    {
        case Sun: return "Sunday";
        case Mon: return "Monday";
        case Tue: return "Tuesday";
        case Wed: return "Wednesday";
        case Thu: return "Thursday";
        case Fri: return "Friday";
        case Sat: return "Saturday";
        default:  return "Invalid day";
    }
}

int main()
{
    showDaysMenu();
    cout << "\nSelected Day: " << getDayName(readUserChoice()) << endl;

    cin.get();
    return 0;
}
