#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) // if positive
        cout << "Positive" << endl;

    else if (number < 0) // if negative
        cout << "Negative" << endl;

    else // otherwise
        cout << "Zero" << endl;

    
    cin.get();
    return 0;
}