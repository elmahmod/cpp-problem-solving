#include <iostream>
#include <limits>
using namespace std;

struct stInfo
{
    string firstName, lastName, phoneNumber;
    int age;
};

stInfo readInfo()
{
    stInfo info;

    cout << "Enter first name: ";
    getline(cin >> ws, info.firstName);

    cout << "Enter last name: ";
    getline(cin >> ws, info.lastName);

    cout << "Enter age: ";
    cin >> info.age;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter phone number: ";
    getline(cin >> ws, info.phoneNumber);
    return info;

}

void printInfo(stInfo info)
{
    cout << string(18, '-') << "\n";
    cout << "First Name: " << info.firstName << endl;
    cout << "Last Name : " << info.lastName << endl;
    cout << "Age       : " << info.age << endl;
    cout << "Phone     : " << info.phoneNumber << endl;
    cout << string(18, '-') << "\n";
}

stInfo* readPersonsInfo(int& personsNumber)
{
    cout << "Enter number of persons: ";
    cin >> personsNumber;

    stInfo* persons = new stInfo[personsNumber];

    for (int i = 0; i < personsNumber; i++)
    {
        cout << "\nPerson [" << i + 1 << "]\n";
        persons[i] = readInfo();
    }

    return persons;
}

void printPersonsInfo(stInfo persons[], int personsNumber)
{
    for (int i = 0; i < personsNumber; i++)
    {
        cout << "\nPerson [" << i + 1 << "] info\n";
        printInfo(persons[i]);
    }
}

int main()
{
    int personsNumber = 0;

    stInfo* persons = readPersonsInfo(personsNumber);
    printPersonsInfo(persons, personsNumber);

    delete[] persons;

    cin.get();
    return 0;
}
