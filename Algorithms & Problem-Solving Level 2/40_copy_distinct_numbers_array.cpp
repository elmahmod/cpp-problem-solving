#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int readPositiveInt(const string &message = "")
{
    int number = 0;
    cout << message;
    cin >> number;

    while (cin.fail() || number < 1)
    {
        if (cin.fail())
            cout << "Invalid input, try again: ";
        else
            cout << "Number must be positive, try again: ";

        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }

    cin.ignore(1000, '\n');
    return number;
}

void printArray(const int arr[], int size, const string &message = "")
{
    cout << message;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void addArrayElement(int arr[], int &size, int number)
{
    arr[size++] = number;
}

bool isNumberInArray(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number)
            return true;
    }
    return false;
}

void copyDistinctNumbers(int arr[], int arr2[], int size, int &destSize)
{
    for (int i = 0; i < size; i++)
    {
        if (!isNumberInArray(arr2, destSize, arr[i])) // focus !!
            addArrayElement(arr2, destSize, arr[i]);
    }
}

int main()
{
    // hard-coded
    int size = 10;
    int arr[10] = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90};

    int arr2[10], destSize = 0;

    copyDistinctNumbers(arr, arr2, size, destSize);
    printArray(arr, size, "\nArray 1 elements: ");
    printArray(arr2, destSize, "\nArray 2 (distinct elements): ");

    return 0;
}
