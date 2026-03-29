#include <iostream>
using namespace std;

int myCeil(float number)
{
    // example of 50.3
    int intPart = (int)number; // 50
    if (number > intPart)      // 50.3 > 50 ? true
        return intPart + 1;    // 50 + 1 = 51
    else
        return intPart;
}

int main()
{
    cout << myCeil(-10.8) << endl;
    cout << myCeil(50.7) << endl;
    cout << myCeil(50.3) << endl;
    cout << myCeil(50.5) << endl;
    return 0;
}
