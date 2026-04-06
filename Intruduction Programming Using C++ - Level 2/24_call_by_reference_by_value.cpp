#include <iostream>
#include <vector>
using namespace std;

void byValue(int x)
{
    /*
        name: x
        value 10:
        address: 0x5ffe20 ( different from ogrinal address) = create new memory(copy)
    */
    x++;
}

void byRef(int &x)
{
    /*
    name: x, a (same memory)
    value 10:
    address: 0x5ffe4c ( Same as the original address, so no new memory is created)
*/

    x++;
}

int main()
{
    int a = 10;

    /*
        name: a
        value = 10
        address: 0x5ffe4c represent as hexadecimal
    */

    byValue(a); // by value
    cout << a << endl;

    byRef(a); // by reference
    cout << a << endl;
    return 0;
}
