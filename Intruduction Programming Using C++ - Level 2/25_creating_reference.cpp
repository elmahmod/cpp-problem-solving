#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a = 10;
    int &x = a;
    /*
        name: a, x
        value = 10
        address: 0x5ffe4c represent as hexadecimal
    */

    // same address
    cout << &a << endl; 
    cout << &x << endl;

    // same value
    cout << a << endl;
    cout << x << endl;

    x = 20;
    // value has changed for two of a,x
    cout << a << endl;
    cout << x << endl;

    return 0;
}
