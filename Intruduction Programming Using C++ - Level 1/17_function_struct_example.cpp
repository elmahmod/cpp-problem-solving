#include <iostream>
#include <string> // for getline
#include <limits> // for numeric
using namespace std;

struct sPerson
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

sPerson readPersonInfo()
{
    sPerson person;

    cout << "\n=== Read ===\n";
    cout << "Enter first name: ";
    getline(cin >> ws, person.firstName);
    cout << "Enter last name: ";
    getline(cin >> ws, person.lastName);

    cout << "Enter age: ";
    cin >> person.age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter phone number: ";
    getline(cin >> ws, person.phone);
    /*
        ws: removes leading whitespace before reading(_______12 -> 12)
        cin.ignore(...): clears the entire input buffer until newline
    */
    return person;
}

void printPersonInfo(const sPerson& person) // pass by reference (Avoid copying(wastes memory))
{
    // const: "I promise I will NOT modify it"
    cout << "\n=== Person Details ===\n";
    cout << "First Name : " << person.firstName << endl;
    cout << "Last Name  : " << person.lastName << endl;
    cout << "Age        : " << person.age << endl;
    cout << "Phone      : " << person.phone << endl;
}

int main()
{
    sPerson person1 = readPersonInfo();
    printPersonInfo(person1);

    cin.get();
    return 0;
}
