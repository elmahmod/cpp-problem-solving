#include <iostream>
using namespace std;

int main()
{
    /*
    ==================================================
    1) Fundamental Types
    - Integral   : int (612), char ('A')
    - Floating   : float (14.5), double (14.5)
    - Boolean    : bool (true / false)
    - String     : string ("Muhammed")
    - void       : void (empty)
    - Wide chars : wchar_t (Unicode)

    ==================================================
    2) Derived Types
    - Array
    - Function
    - Pointer
    - Reference

    ==================================================
    3) User-Defined Types
    - Class
    - Structure (struct)
    - Union
    - Enum
    - typedef
    */

    // Syntax: type variableName = value;
    int number        = 45;
    float fNumber     = 7.84;
    double dNumber    = 21.9959;
    char letter       = 'a';
    string text       = "hello";
    bool isSomething  = true;

    /*
    ==================================================
    Variable Naming Rules
    ==================================================
    - Names can contain letters, digits and underscores
    - Names must begin with a letter or an underscore(_)
    - Names are case sensitive (myVar != myvar)
    - Names cannot contain whitespaces or special characters like (!, #, %, etc..)
    - Reversed words(like c++ keywords, such as 'int') cannot be used as names
    */

    // Constants: read-only
    const int pi = 3.14;
    
    cin.get();
    return 0;
}
