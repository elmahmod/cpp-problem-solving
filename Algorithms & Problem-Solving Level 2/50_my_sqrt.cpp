#include <iostream>
#include <cmath> // pow()
using namespace std;

float mySqrt(float Number)
{
    return pow(Number, 0.5);
}

int main()
{
    cout << mySqrt(25) << endl;
    cout << mySqrt(50.7) << endl;
    cout << mySqrt(50.3) << endl;
    cout << mySqrt(50.5) << endl;
    return 0;
}
