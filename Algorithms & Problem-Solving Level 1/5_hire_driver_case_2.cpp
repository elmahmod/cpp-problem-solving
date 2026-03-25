#include <iostream>
using namespace std;

struct stDriverInfo
{
    int age;
    bool hasDriverLicense;
    bool hasRecommendation;
};

stDriverInfo readDriverInfo()
{
    stDriverInfo driverInfo;

    cout << "Enter your age: ";
    cin >> driverInfo.age;
    cin.ignore(1000, '\n');
    cout << "do you have a driver license [1]Yes, [0]No : ";
    cin >> driverInfo.hasDriverLicense;
    cout << "do you have a Recommendation [1]Yes, [0]No : ";
    cin >> driverInfo.hasRecommendation;
    return driverInfo;
}

bool isAccepted(const stDriverInfo& driverInfo)
{
    return (driverInfo.age >= 21 && driverInfo.hasDriverLicense) || (driverInfo.hasRecommendation);
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
    // printDriverStatus(readDriverInfo());
    int number;

    cout << "hello: ";
    cin >> number;
    cin >> number;
    cout << "hello: ";
    return 0;
}
