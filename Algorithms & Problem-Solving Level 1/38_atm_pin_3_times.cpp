#include <iostream>
using namespace std;

string readString(const string &message = "")
{
    string pin;
    cout << message;
    cin >> pin;

    cin.ignore(1000, '\n');
    return pin;
}

bool login()
{
    string pinCode;
    int counter = 3;

    while (counter > 0)
    {
        pinCode = readString("Enter your pin code: ");
        counter--;

        if (pinCode == "1234")
            return true;

        if (counter > 0)
            cout << "\n=== Wrong pin code, " << counter << " times left ===\n";
    }
    return false;
}

int main()
{
    const int userBalance = 7500;

    if (login())
    {
        cout << "\n=== Login successful! ===\n";
        cout << "Your balance is: " << userBalance << " USD\n";
    }
    else
        cout << "\n=== Login failed! Wrong PIN entered 3 times ===\n";

    return 0;
}