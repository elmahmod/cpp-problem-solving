#include <iostream>
using namespace std;

// A function is a reusable block of code that performs a specific task

// Procedure (does NOT return a value)
void printSum(int a, int b) // a, b -> parameters
{
    cout << "Sum (procedure): " << a + b << endl;
}

// Function (returns a value)
int getSum(int a, int b)
{
    return a + b;
}

int main()
{
    printSum(3, 5); // 3, 5 -> arguments

    cout << "Sum (function): " << getSum(2, 9) << endl;

    cin.get();
    return 0;
}
