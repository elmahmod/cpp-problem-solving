#include <iostream>
using namespace std;

// array: a variable that stores multiple values of the same type

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // or arr[] = {1, 2, 3, 4, 5};

    cout << "===== Values =====\n";
    cout << "arr[0] = " << arr[0] << endl;
    cout << "arr[1] = " << arr[1] << endl;
    cout << "arr[2] = " << arr[2] << endl;
    cout << "arr[3] = " << arr[3] << endl;
    cout << "arr[4] = " << arr[4] << endl;

    // The difference between addresses = sizeof(data type)
    cout << "\n===== Addresses =====\n";
    cout << "&arr[0] = " << &arr[0] << endl;
    cout << "&arr[1] = " << &arr[1] << endl;
    cout << "&arr[2] = " << &arr[2] << endl;
    cout << "&arr[3] = " << &arr[3] << endl;
    cout << "&arr[4] = " << &arr[4] << endl;

    /*
        Skip this section for now (will be explained in a future lesson)
    */
    cout << "\n\n**Skip the code below**";
    cout << "\n===== Pointer Arithmetic (Addresses) =====\n";
    cout << "arr + 0 = " << (arr + 0) << endl;
    cout << "arr + 1 = " << (arr + 1) << endl;
    cout << "arr + 2 = " << (arr + 2) << endl;
    cout << "arr + 3 = " << (arr + 3) << endl;
    cout << "arr + 4 = " << (arr + 4) << endl;

    cout << "\n===== Pointer Arithmetic (Values) =====\n";
    cout << "*(arr + 0) = " << *(arr + 0) << endl;
    cout << "*(arr + 1) = " << *(arr + 1) << endl;
    cout << "*(arr + 2) = " << *(arr + 2) << endl;
    cout << "*(arr + 3) = " << *(arr + 3) << endl;
    cout << "*(arr + 4) = " << *(arr + 4) << endl;

    // Important concept:
    // arr[i]      == *(arr + i)
    // &arr[i]     == (arr + i)

    cin.get();
    return 0;
}
