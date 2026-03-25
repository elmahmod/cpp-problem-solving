#include <iostream>
using namespace std;

void readArray(int arr[]) // int arr[] => int* arr(advanced skip this comment)
{
    cout << "Enter 5 numbers:\n";

    cout << "arr[0] = ";
    cin >> arr[0];

    cout << "arr[1] = ";
    cin >> arr[1];

    cout << "arr[2] = ";
    cin >> arr[2];

    cout << "arr[3] = ";
    cin >> arr[3];

    cout << "arr[4] = ";
    cin >> arr[4];
}

void printArray(int arr[])
{
    cout << "\nArray values:\n";

    cout << "arr[0] = " << arr[0] << endl;
    cout << "arr[1] = " << arr[1] << endl;
    cout << "arr[2] = " << arr[2] << endl;
    cout << "arr[3] = " << arr[3] << endl;
    cout << "arr[4] = " << arr[4] << endl;
}

int sumArray(int arr[])
{
    return arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
}

int main()
{
    int arr[5];

    readArray(arr); // sends the address of the first element of the array ( arr + 0 = &arr[0])
    printArray(arr);

    int total = sumArray(arr);
    cout << "\nSum = " << total << endl;

    cin.get();
    return 0;
}
