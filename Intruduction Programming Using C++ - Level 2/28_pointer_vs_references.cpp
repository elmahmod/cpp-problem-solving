#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &x = a; // reference to a

    cout << "a = " << a << endl;
    cout << "x = " << x << endl;

    cout << "Address of a = " << &a << endl;
    cout << "Address of x = " << &x << endl;

    /*
    name: x, a (same container)
    value 10:
    address: 0x5ffe4c
    */

    int *p = &a; // pointer to a
    cout << "\nPointer p:" << endl;
    cout << "p (address of a) = " << p << endl;
    cout << "*p (value of a) = " << *p << endl;
    cout << "&p (address of pointer itself) = " << &p << endl;

    // differences:
    // x (reference) cannot refer to another variable in runtime
    // p (pointer) can point to another variable in runtime

    int b = 50;
    // &x = b; error
    p = &b;

    return 0;
}