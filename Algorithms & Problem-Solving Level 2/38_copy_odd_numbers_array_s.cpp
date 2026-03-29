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

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void fillArrayRandomly(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = randomNumber(1, 10);
}

void printArray(const int arr[], int size, const string &message = "")
{
    cout << message;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void addArrayElement(int arr[], int &size, int element) // new function
{
    arr[size++] = element;
}

void copyOddNumbers(const int arr[], int arr2[], int size, int &destSize)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
            addArrayElement(arr2, destSize, arr[i]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int size = readPositiveInt("Enter number of elements: ");
    int *arr = new int[size];
    fillArrayRandomly(arr, size);

    // Special length for new array
    int destSize = 0;
    int *arr2 = new int[size]; // assuming capacity
    copyOddNumbers(arr, arr2, size, destSize);

    printArray(arr, size, "\nArray 1 elements: ");
    printArray(arr2, destSize, "Array 2 elements after copy: ");

    delete[] arr;
    delete[] arr2;
    return 0;
}
