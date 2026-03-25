#include <iostream>
#include <string>
using namespace std;

struct sInfo
{
    string fullName;
    int age;
};

sInfo ReadInfo()
{
    sInfo info;

    cout << "Enter full name: ";
    getline(cin >> ws, info.fullName);
    cout << "Enter age: ";
    cin >> info.age;
    cout << endl;
    return info;
}

void printInfo(const sInfo &info)
{
    cout << "Full name: " << info.fullName << endl;
    cout << "Age      : " << info.age << endl;
    cout << endl;
}

int main()
{
    sInfo person[3];

    cout << "\n=== Read ===\n";
    person[0] = ReadInfo();
    person[1] = ReadInfo();
    person[2] = ReadInfo();

    cout << "\n=== Print ===\n";
    printInfo(person[0]);
    printInfo(person[1]);
    printInfo(person[2]);

    cin.get();
    return 0;
}
