#include <iostream>

using namespace std; 

int main()
{
    /*
        Literals: are data used for representing fixed values. (exmaple: 5, 3.5, 'b', "muhammed",..etc)
        why? you cannot assign diffrenet values to these terms

        Types: 
        1. Integer literals
            , decimal     : 0, -9, 22  
            , octal       : 021, 077, 033
            , hexadecimal : 0x6f, 0x2a, 0x512
        
        2. Floating-Point literals: 13.5, 1.99, -9.5
        3. Characters literals: A, b, z, $, #
        4. Escape Sequences literals: \n, \\, \t, \". \', \a
    */  

    cout << "Hello\n";     // string + escape
    cout << 'A' << endl;   // char
    cout << 10 << endl;    // integer
    cout << 3.5 << endl;   // float
    
    cout << "m1\\m1 \n";
    cout << "m1\tm1 \n";
    cout << "\"muhammed\" \n";
    
    cin.get();
    return 0; // end program
}
