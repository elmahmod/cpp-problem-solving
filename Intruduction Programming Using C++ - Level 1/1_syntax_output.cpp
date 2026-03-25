#include <iostream> // library for input/output (cout)

using namespace std; // no need to type std::

int main() // program starts here
{
    std::cout << "hello world.\n"; 

    std::cout << "my name is muhammed." << std::endl; 

    std::cout << "my age is " << 20; 

    std::cout << "\n1 + 1 = " << 1 + 1; 

    // std::cout -> print to screen
    // std::     -> standard library
    // <<        -> send data to cout
    // "\n"      -> new line (fast, does NOT flush)!
    // endl      -> new line + flush (slower, clearer)!
    // ;         -> end of line
    // buffer -> temporary memory that holds data before showing it!
    
    cin.get();
    return 0; // end program
}
