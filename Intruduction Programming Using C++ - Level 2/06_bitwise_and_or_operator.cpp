#include <iostream>
using namespace std;

int main()
{
    cout << (12 & 25) << endl; // bitwise AND

    /*
        12 = 00001100 (Binary)
        25 = 00011001 (Binray)

        00001100
        00011001 &
        ________
        00001000 = 8 (Decimal)
    */

    cout << (12 | 25) << endl; // bitwise OR

        /*
        12 = 00001100 (Binary)
        25 = 00011001 (Binray)

        00001100
        00011001 |
        ________
        00011101 = 29 (Decimal)
    */
    return 0;
}
