#include <iostream>
using namespace std;

int main()
{
    int A = 11, B = 20;

    /* 
        Important note:
        A++     -> A = A + 1
        +AA     -> A = A + 1
        ,
        B--     -> B = B - 1
        --B     -> B = B - 1
    */

    cout << "===== Increment =====\n";
    cout << "A = " << A << endl;

    A++;
    cout << "After A++       -> A = " << A << endl;
    ++A;
    cout << "After ++A1      -> A1 = " << A << endl;

    cout << "\n--- Difference between ++A and A++ ---\n";
    cout << "A = " << A << endl;
    cout << "Using A++       -> value = " << A++ << " (print first)\n";
    cout << "After A++       -> A = " << A << "     (increment happened)\n";
    cout << "Using ++A       -> value = " << ++A << " (increment first, print)\n";


    cout << "\n===== Decrement =====\n";
    cout << "B = " << B << endl;

    B--;
    cout << "After B--       -> B = " << B << endl;
    --B;
    cout << "After --B1      -> B1 = " << B << endl;

    cout << "\n--- Difference between --B and B-- ---\n";
    cout << "B = " << B << endl;
    cout << "Using B--       -> value = " << B-- << " (print first)\n";
    cout << "After B--       -> B = " << B << "     (decrement happened)\n";
    cout << "Using --B       -> value = " << --B << " (decrement first, print)\n";

    cin.get();
    return 0;
}
