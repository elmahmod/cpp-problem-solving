#include <iostream>
using namespace std;

struct stDriverInfo
{
    int age;
    bool hasDriverLicense;
};

stDriverInfo readDriverInfo()
{
    stDriverInfo driverInfo;

    cout << "Enter your age: ";
    cin >> driverInfo.age;
    cin.ignore(1000, '\n');
    cout << "do you have a driver license [1]Yes, [0]No : ";
    cin >> driverInfo.hasDriverLicense;
    return driverInfo;
}

bool isAccepted(const stDriverInfo& driverInfo)
{
    return (driverInfo.age >= 21 && driverInfo.hasDriverLicense);
}

void printDriverStatus(const stDriverInfo& driverInfo)
{
    if (isAccepted(driverInfo))
        cout << "Hired\n";
    else
        cout << "Rejected\n";
}

int main()
{
    printDriverStatus(readDriverInfo());
    return 0;
}
