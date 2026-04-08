#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10, b = 20;

    cout << "Before swap:" << endl;
    cout << "a = " << a << ", address of a = " << &a << endl;
    cout << "b = " << b << ", address of b = " << &b << endl;

    swap(&a, &b);

    cout << "\nAfter swap:" << endl;
    cout << "a = " << a << ", address of a = " << &a << endl;
    cout << "b = " << b << ", address of b = " << &b << endl;

    return 0;
}
