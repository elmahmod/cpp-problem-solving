#include <iostream>
using namespace std;

void printNumbers(int from, int to)
{
    if (from <= to)
    {
        cout << from << " ";
        printNumbers(from + 1, to);
    }
}
/*
    main
 └── printNumbers(1,4)
      └── printNumbers(2,4)
           └── printNumbers(3,4)
                └── printNumbers(4,4)
                     └── printNumbers(5,4) ← stop
*/

void printNumberInReverse(int from, int to)
{
    if (from >= to)
    {
        cout << from << " ";
        printNumberInReverse(from - 1, to);
    }
}

int power(int base, int pw)
{
    if (pw == 0)
        return 1;
    else
        return base * power(base, pw - 1);
}

/*
    power(2,4)
    |
    v
2 * power(2,3)
    |
    v
2 * power(2,2)
    |
    v
2 * power(2,1)
    |
    v
2 * power(2,0)
    |
    v
1   ← base case
*/

int main()
{
    // not recommended ( it cause stack overflow)
    printNumbers(1, 4);
    cout << '\n';
    printNumberInReverse(4, 1);
    cout << '\n';

    cout << power(2, 4) << endl;
    return 0;
}
