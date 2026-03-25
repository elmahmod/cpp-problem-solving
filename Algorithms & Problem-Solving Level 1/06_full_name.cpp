#include <iostream>
using namespace std;

struct stInfo
{
    string firstName;
    string lastName;
};

stInfo readInfo()
{
    stInfo info;
    cout << "Enter first name: ";
    getline(cin >> ws, info.firstName);
    cout << "Enter last name: ";
    getline(cin >> ws, info.lastName);
    return info;
}

string getFullName(stInfo info, bool reversed)
{
    info.firstName[0] = toupper(info.firstName[0]);
    info.lastName[0] = toupper(info.lastName[0]);
    
    if (reversed)
        return info.lastName + " " + info.firstName;
    else
        return info.firstName + " " + info.lastName;
}

void printFullName(const string &fullName)
{
    cout << "\nYour full name is: " << fullName << endl;
}

int main()
{
    printFullName(getFullName(readInfo(), false));
    return 0;
}
