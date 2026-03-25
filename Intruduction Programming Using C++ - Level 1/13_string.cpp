#include <iostream>
#include <string>
using namespace std;

// string is a data type that stores a sequence of characters

int main()
{
    string str = "muhammed";

    cout << "Length: " << str.length() << endl;
    cout << "First char: " << str[0] << endl;

    string fullname;
    cout << "Enter your full name: ";
    getline(cin >> ws, fullname);

    cout << "Full name: " << fullname << endl;

    cin.get();
    return 0;
}
