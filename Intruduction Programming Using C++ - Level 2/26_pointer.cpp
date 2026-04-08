#include <iostream>
using namespace std;

int main()
{
    // Pointer: a variable that stores the address of another variable
    int a = 10;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;

    /*
    name: a
    value = 10
    address: 0x5ffe4c
    */

    int *p = &a; // referencing
    cout << "\nValue of pointer p (address of a): " << p << endl;
    cout << "\nAddress of pointer p: " << &p << endl;

    /*
    name: p
    value = 0x5ffe4c  (a's address)
    address: 0x5ffe40
    */

    int b = 50;
    p = &b; // change the pointer from a to b in the runtime

    return 0;
}
