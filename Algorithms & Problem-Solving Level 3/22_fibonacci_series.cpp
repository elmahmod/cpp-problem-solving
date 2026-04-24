#include <iostream>
using namespace std;

void printFibonacci(int number)
{
    int fibNumber = 0;
    int prev1 = 0, prev2 = 1;

    for (int i = 0; i < number; i++)
    {
        fibNumber = prev1 + prev2;
        prev2 = prev1;
        prev1 = fibNumber;

        cout << fibNumber << "\t";
    }
}

void printFibonacciRecursion(int number, int prev1, int prev2)
{
    if (number > 0)
    {
        int fibNumber = prev1 + prev2;
        prev2 = prev1;
        prev1 = fibNumber;

        cout << fibNumber << "\t";

        printFibonacciRecursion(number - 1, prev1, prev2);
    }
}

int main()
{
    printFibonacci(10);
    cout << endl;
    printFibonacciRecursion(10, 0, 1);

    return 0;
}
