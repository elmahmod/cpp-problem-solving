#include <iostream>
using namespace std;

int myFloor(float number)
{
    // example of -10.4
    int intPart = (int)number; // -10
    if (number < intPart)      // -10.4 < -10 ? true
        return intPart - 1;    // -11
    else
        return intPart;
}

int main()
{
    cout << myFloor(-10.4) << endl;
    cout << myFloor(50.7) << endl;
    cout << myFloor(50.3) << endl;
    cout << myFloor(50.5) << endl;
    return 0;
}
