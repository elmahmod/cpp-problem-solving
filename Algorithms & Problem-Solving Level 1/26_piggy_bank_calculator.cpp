#include <iostream>
using namespace std;

struct stPiggy
{
    int pennies, nickels, dimes, quarters, dollars;
};

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

stPiggy readPiggy()
{
    stPiggy piggy;
    piggy.pennies = readPositiveNumber("Enter pennies: ");
    piggy.nickels = readPositiveNumber("Enter nickels: ");
    piggy.dimes = readPositiveNumber("Enter dimes: ");
    piggy.quarters = readPositiveNumber("Enter quarters: ");
    piggy.dollars = readPositiveNumber("Enter dollars: ");
    return piggy;
}

int getTotalPennies(stPiggy piggy)
{
    int totalPennies = piggy.pennies + (piggy.nickels * 5) + (piggy.dimes * 10) + (piggy.quarters * 25) + (piggy.dollars * 100);
    return totalPennies;
}

float getTotalDollars(int totalPennies)
{
    return totalPennies / 100.0;
}

int main()
{
    stPiggy piggy = readPiggy();
    
    int totalPennies = getTotalPennies(piggy);
    float totalDollars = getTotalDollars(totalPennies);

    cout << "total pennies: " << totalPennies << endl;
    cout << "total dollars: " << totalDollars << endl;
    return 0;
}
