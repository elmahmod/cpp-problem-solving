#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // pointer to first element of arr[]

    cout << "Pointer arithmetic (addresses):" << endl;
    for (int i = 0; i < 5; i++)
        cout << "ptr + " << i << " = " << (ptr + i) << endl;

    cout << "\nDereferencing pointers (values):" << endl;
    for (int i = 0; i < 5; i++)
        cout << "*(ptr + " << i << ") = " << *(ptr + i) << endl;

    cout << "\nArray-style indexing (addresses):" << endl;
    for (int i = 0; i < 5; i++)
        cout << "&ptr[" << i << "] = " << &ptr[i] << endl;

    cout << "\nArray-style indexing (values):" << endl;
    for (int i = 0; i < 5; i++)
        cout << "ptr[" << i << "] = " << ptr[i] << endl;

    return 0;
}
