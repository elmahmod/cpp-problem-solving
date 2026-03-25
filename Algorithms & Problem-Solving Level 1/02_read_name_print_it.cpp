#include <iostream>
#include <string>
using namespace std;

string readName()
{
    string name;
    cout << "Enter your name: ";
    getline(cin >> ws, name);
    return name;
}

void printName(const string& name)
{
    cout << "Your name is: " << name << endl;
}

int main()
{
    printName(readName());
    return 0;
}
