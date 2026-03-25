#include <iostream>
using namespace std;

struct sPerson
{
    string name;
    int age;
};

int main()
{
    sPerson persons[3]; // array of struct

    // ===== Input =====
    cout << "Enter data for 3 persons:\n";

    cout << "\nPerson 1\n";
    cout << "Name: ";
    cin >> persons[0].name;
    cout << "Age: ";
    cin >> persons[0].age;

    cout << "\nPerson 2\n";
    cout << "Name: ";
    cin >> persons[1].name;
    cout << "Age: ";
    cin >> persons[1].age;

    cout << "\nPerson 3\n";
    cout << "Name: ";
    cin >> persons[2].name;
    cout << "Age: ";
    cin >> persons[2].age;

    // ===== Output =====
    cout << "\n===== Persons Info =====\n";

    cout << "\nPerson 1\n";
    cout << "Name: " << persons[0].name << endl;
    cout << "Age : " << persons[0].age << endl;

    cout << "\nPerson 2\n";
    cout << "Name: " << persons[1].name << endl;
    cout << "Age : " << persons[1].age << endl;

    cout << "\nPerson 3\n";
    cout << "Name: " << persons[2].name << endl;
    cout << "Age : " << persons[2].age << endl;

    cin.get();
    return 0;
}
