#include <iostream>
using namespace std;

float myAbs(float number)
{
    return (number < 0) ? -number : number;
}

int main()
{
    cout << myAbs(-10) << endl;
    cout << myAbs(50.5) << endl;
    return 0;
}
