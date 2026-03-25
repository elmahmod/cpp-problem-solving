#include <iostream>
using namespace std;

int main()
{    
    // ==============================
    // Comparison Operators
    // ==============================
    cout << "===== Comparison Operators =====\n";
    int A = 10, B = 20;
    cout << "A = " << A << ", B = " << B << "\n\n";
    cout << "A == B  -> " << (A == B) << "  // not true\n";
    cout << "A != B  -> " << (A != B) << "  // true\n";
    cout << "A > B   -> " << (A > B)  << "  // not true\n";
    cout << "A < B   -> " << (A < B)  << "  // true\n";
    cout << "A >= B  -> " << (A >= B) << "  // not true\n";
    cout << "A <= B  -> " << (A <= B) << "  // true\n";

    // ==============================
    // Logical Operators (using X, Y)
    // ==============================
    cout << "\n===== Logical Operators =====\n";

    bool X = 1, Y = 0; // 1 = true, 0 = false

    cout << "X = " << X << ", Y = " << Y << "\n\n";

    cout << "X && Y     -> " << (X && Y)    << "  // false\n";
    cout << "X || Y     -> " << (X || Y)    << "  // true\n";
    cout << "!X         -> " << (!X)        << "  // false\n";
    cout << "!Y         -> " << (!Y)        << "  // true\n";
    cout << "!(X && Y)  -> " << (!(X && Y)) << "  // true\n";
    cout << "!(X || Y)  -> " << (!(X || Y)) << "  // false\n";

    cin.get();
    return 0;
}
