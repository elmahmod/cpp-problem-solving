#include <iostream>
#include <limits> // for numeric_limits<?>::min/max()
using namespace std;

int main()
{
    // sizeof() -> returns the size of a variable in bytes

    // ==============================
    // 1) Basic Data Types in C++
    // ==============================
    short p1 = 4;
    int p = 10;
    long p2 = 25;
    long long p3 = 455;

    float f = 3.14;
    double d = 3.1415926535;
    long double d2 = 3.5555555151515151;

    char c = 'A';
    bool b = true;
    string s = "Muhammed";

    cout << "===== Basic Data Types Sizes =====\n";
    cout << "short        : " << sizeof(p1) << " bytes\n";
    cout << "int          : " << sizeof(p)  << " bytes\n";
    cout << "long         : " << sizeof(p2) << " bytes\n";
    cout << "long long    : " << sizeof(p3) << " bytes\n";

    cout << "\nfloat        : " << sizeof(f)  << " bytes\n";
    cout << "double       : " << sizeof(d)  << " bytes\n";
    cout << "long double  : " << sizeof(d2) << " bytes\n";

    cout << "\nchar         : " << sizeof(c)  << " byte\n";
    cout << "bool         : " << sizeof(b)  << " byte\n";
    cout << "string       : " << sizeof(s)  << " bytes\n";

    // ==============================
    // 2) Type Modifiers
    // ==============================
    /*
        Common modifiers:
        - signed
        - unsigned
        - short
        - long

        These modifiers are mostly used with. (int, double, char)
    */

    // ==============================
    // 3) Unsigned Integer Types
    // ==============================
    /*
        {it just works with (char, integer types)}

        unsigned means:
        -> the variable cannot store negative values
        -> it stores only 0 and positive numbers
    */
    unsigned short us = 65000;
    unsigned int ui = 4000000000U;
    unsigned long ul = 4000000000UL; // this is the same of normal int!!
    unsigned long long ull = 18000000000000000000ULL;
    unsigned char uc = 'D';

    cout << "\n===== Unsigned Types Sizes =====\n";
    cout << "unsigned short      : " << sizeof(us) << " bytes\n";
    cout << "unsigned int        : " << sizeof(ui) << " bytes\n";
    cout << "unsigned long       : " << sizeof(ul) << " bytes\n";
    cout << "unsigned long long  : " << sizeof(ull) << " bytes\n";
    cout << "unsigned char       : " << sizeof(uc) << " byte\n";
    cout << "unsigned float      : " << "not supported\n";
    cout << "unsigned double     : " << "not supported\n";
    cout << "unsigned long double: " << "not supported\n";
    cout << "unsigned bool       : " << "not supported\n";
    cout << "unsigned string     : " << "not supported\n";
    cout << "unsigned void       : " << "not supported\n";

    // ==============================
    // 4) Type Ranges
    // ==============================

    cout << "\n===== Ranges =====\n";
    cout << "short:\n";
    cout << "Min = " << numeric_limits<short>::min() << endl;
    cout << "Max = " << numeric_limits<short>::max() << endl;
    cout << "\nint:\n";
    cout << "Min = " << numeric_limits<int>::min() << endl;
    cout << "Max = " << numeric_limits<int>::max() << endl;
    cout << "\nlong:\n";
    cout << "Min = " << numeric_limits<long>::min() << endl;
    cout << "Max = " << numeric_limits<long>::max() << endl;
    cout << "\nlong long:\n";
    cout << "Min = " << numeric_limits<long long>::min() << endl;
    cout << "Max = " << numeric_limits<long long>::max() << endl;
    cout << "\nfloat:\n";
    cout << "Lowest = " << numeric_limits<float>::lowest() << endl;
    cout << "Max = " << numeric_limits<float>::max() << endl;
    cout << "\ndouble:\n";
    cout << "Lowest = " << numeric_limits<double>::lowest() << endl;
    cout << "Max = " << numeric_limits<double>::max() << endl;
    cout << "\nlong double:\n";
    cout << "Min = " << numeric_limits<long double>::lowest() << endl;
    cout << "Max = " << numeric_limits<long double>::max() << endl;
    cout << "\nchar:\n";
    cout << "Min = " << (int)numeric_limits<char>::min() << endl;
    cout << "Max = " << (int)numeric_limits<char>::max() << endl;
    cout << "\nbool:\n";
    cout << "Min = " << numeric_limits<bool>::min() << endl;
    cout << "Max = " << numeric_limits<bool>::max() << endl;
    cout << "\nvoid:\n";
    cout << "has no range" << endl;
    cout << "\nstring:\n";
    cout << "has no range" << endl;

    cin.get();
    return 0;
}
