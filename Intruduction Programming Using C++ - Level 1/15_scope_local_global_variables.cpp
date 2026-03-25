#include <iostream>
using namespace std;

/*
    Scope = the area where the variable exists
    Variable Scope
    - Local variable: exists only inside its function/block
    - Global variable: exists during the entire program
*/

int x = 10; // global variable

void showValues()
{
    int x = 100; // local variable

    cout << "Inside function:\n";
    cout << "Local x  = " << x << endl;
    cout << "Global x = " << ::x << endl; // access global
}

int main()
{
    int x = 300; // local variable

    cout << "Inside main:\n";
    cout << "Local x  = " << x << endl;  
    cout << "Global x = " << ::x << endl; // 10

    // modify global variable

    showValues();

    cin.get();
    return 0;
}
