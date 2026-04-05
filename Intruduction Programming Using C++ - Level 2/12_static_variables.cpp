#include <iostream>
using namespace std;

void func()
{
    static int number = 1; // static variable: function scope, program lifetime
    cout << number << endl;

    number ++;
}

int main()
{
    func();
    func();
    func();
    func();
    
    return 0;
}
