#include <iostream>
using namespace std;

// بعض الدوال
void hello()
{
    cout << "Hello!" << endl;
}

void goodbye()
{
    cout << "Goodbye!" << endl;
}

void greet()
{
    cout << "Greetings!" << endl;
}

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main()
{
    void (*funcArr[3])() = {hello, goodbye, greet};

    funcArr[0]();
    funcArr[1]();
    funcArr[2]();

    int (*mathArr[2])(int, int) = {add, sub};

    cout << mathArr[0](5,3) << endl; // 5 + 3
    cout << mathArr[1](10,5) << endl; // 10 - 5

    return 0;
}
