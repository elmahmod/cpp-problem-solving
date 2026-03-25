#include <iostream>
using namespace std;

// struct = a way to group related variables into one type.

struct sAddress
{
    string poBox;
    string street;
};

struct sOwner
{
    string fullName;
    string phone;
    sAddress address;
};

struct sCar
{
    string brand;
    string model;
    int year;
    sOwner owner;
};

int main() 
{
    sCar myCar;

    myCar.brand = "BMW";
    myCar.model = "X5";
    myCar.year = 2022;

    myCar.owner.fullName = "Muhammed";
    myCar.owner.phone = "992321";

    myCar.owner.address.poBox = "12345";
    myCar.owner.address.street = "Main Street";

    // Second car
    sCar myCar2;

    myCar2.brand = "BMW";
    myCar2.model = "M3";
    myCar2.year = 2023;

    myCar2.owner.fullName = "Ibrahim";
    myCar2.owner.phone = "05151";

    myCar2.owner.address.poBox = "67890";
    myCar2.owner.address.street = "Second Street";

    // =========================
    // Print Data
    // =========================
    cout << "===== Car 1 =====\n";
    cout << "Brand: " << myCar.brand << endl;
    cout << "Owner: " << myCar.owner.fullName << endl;
    cout << "Street: " << myCar.owner.address.street << endl;

    cout << "\n===== Car 2 =====\n";
    cout << "Brand: " << myCar2.brand << endl;
    cout << "Owner: " << myCar2.owner.fullName << endl;
    cout << "Street: " << myCar2.owner.address.street << endl;

    cin.get();
    return 0;
}
