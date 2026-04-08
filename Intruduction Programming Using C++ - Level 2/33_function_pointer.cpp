#include <iostream>
using namespace std;

bool zero()
{
    return false;
}

void hello(string message)
{
    cout << "hello from function" << endl;
    cout << message << endl;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // pointer to function with argument, returns void
    void (*ptrHello)(string) = &hello;
    ptrHello("hii");

    // pointer to function with two arguments, returns int
    int (*ptrAdd)(int, int) = &add;
    cout << "5 + 3 = " << ptrAdd(5, 3) << endl;

    // pointer to function with no arguments, returns int
    bool (*ptrZero)() = &zero;
    cout << ptrZero();

    return 0;
}
