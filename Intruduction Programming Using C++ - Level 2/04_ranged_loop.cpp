#include <iostream>
using namespace std;

int main()
{
    // for(rangeDeclaration : rangeExpression) { code; }

    int arr[] =  {1, 2, 3, 4, 5}; // collection of integers

    for (int n : arr)
    {
        cout << n << " ";
    }

    cout << '\n';

    for (int n : {1, 2, 3, 4, 5, 6, 7, 8, 9}) // set of items
    {
        cout << n << " ";
    }

    return 0;
}
