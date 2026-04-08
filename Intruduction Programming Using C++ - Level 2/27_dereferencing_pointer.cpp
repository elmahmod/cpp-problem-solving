#include <iostream>
using namespace std;

int main()
 {
    // *p → "dereferencing pointer": gets or sets the value at the address stored in the pointer.

    int a = 10;

    cout << "a = " << a << endl;
    cout << "Address of a = " << &a << endl;

    // *p → "dereferencing pointer": gets or sets the value at the address stored in the pointer.

    int* p = &a;
    cout << "\np (address of a) = " << p << endl;
    cout << "*p (value of a) = " << *p << endl;  //

    *p = 30; // 
    cout << "\nAfter *p = 30:" << endl;
    cout << "a = " << a << ", *p = " << *p << endl; //

    a = 50;
    cout << "\nAfter a = 50:" << endl;
    cout << "a = " << a << ", *p = " << *p << endl; //

    return 0;
}
