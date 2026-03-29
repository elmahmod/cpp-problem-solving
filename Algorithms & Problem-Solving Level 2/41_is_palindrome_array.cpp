#include <iostream>
using namespace std;

bool isPalindromeArray(const int arr[], int size)
{
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1])
            return false;
    }
    return true;
}

void printArray(const int arr[], int size, const string &message = "")
{
    cout << message;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
        
    cout << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 20, 10};
    int size = sizeof(arr) / sizeof(arr[0]); // size of array

    printArray(arr, size, "Array elements: ");

    if (isPalindromeArray(arr, size))
        cout << "is palindrome\n";
    else
        cout << "is not palindrome\n";

    return 0;
}
