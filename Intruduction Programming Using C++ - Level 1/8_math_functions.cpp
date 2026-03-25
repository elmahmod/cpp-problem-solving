#include <iostream>
#include <cmath> // for math functions
using namespace std;

int main()
{
    cout << "===== Math Functions =====\n\n";

    cout << "sqrt(25)        -> " << sqrt(25)  << "   // square root\n";

    cout << "round(3.5)      -> " << round(3.5) << "   // nearest integer\n";
    cout << "round(3.2)      -> " << round(3.2) << "   // nearest integer\n";
    cout << "round(3.7)      -> " << round(3.7) << "   // nearest integer\n";

    cout << "pow(6, 2)       -> " << pow(6, 2)  << "  // 6^2\n";

    cout << "ceil(8.3)       -> " << ceil(8.3)  << "   // round up\n"; 
    cout << "floor(8.9)      -> " << floor(8.9) << "   // round down\n";

    cout << "ceil(-8.3)      -> " << ceil(-8.3)  << "  // use your brain!\n";
    cout << "floor(-8.9)     -> " << floor(-8.9) << "  // use your brain!\n";

    cout << "abs(-10)        -> " << abs(-10)   << "  // absolute value\n";

    //All the math functions: https://en.cppreference.com/w/cpp/header/cmath.html
    cin.get();
    return 0;
}
