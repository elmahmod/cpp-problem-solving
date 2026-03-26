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
    pinCode = readString("Enter your pin code: ");
    return pinCode == "1234";
}

int main()
{
    const int userBalance = 7500;

    if (login())
        cout << "\nYour balance is: " << userBalance << endl;
    else
        cout << "\nWrong PIN\n";

    return 0;
}