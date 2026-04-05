#include <iostream>
using namespace std;

double sum(double a, double b)
{
    return (a + b);
}

int sum(int a, int b)
{
    return (a + b);
}

int sum(int a, int b, int c)
{
    return (a + b + c);
}

// Error: parameters are same, return type doesn't count
// double sum(int a, int b)
// {
//     return (a + b);
// }

// error: sum(10, 20) could match both
// int sum(int a, int b, int d = 0)
// {
//     return a + b + d;
// }

int main()
{
    cout << sum(2, 3) << endl;     // Calls  sum(int, int)
    cout << sum(2.5, 3.5) << endl; // Calls  sum(double, double)
    cout << sum(1, 2, 3) << endl;  // Calls  sum(int, int, int)

    return 0;
}
