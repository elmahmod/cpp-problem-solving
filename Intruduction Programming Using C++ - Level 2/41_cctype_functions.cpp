#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "tolower('A') = " << char(tolower('A')) << endl;
    cout << "toupper('a') = " << char(toupper('a')) << endl;

    // Any number that is not 0 is correct
    cout << "isupper('Y') = " << isupper('Y') << endl;
    cout << "islower('y') = " << islower('y') << endl;
    cout << "isdigit('4') = " << isdigit('4') << endl;
    cout << "ispunct(':') = " << ispunct(':') << endl;

    return 0;
}
