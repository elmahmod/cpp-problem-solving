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

void printArray(const int arr[], int size, const string &message = "") // more reusable now
{
    cout << message;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void sumTwoArrays(const int arr[], const int arr2[], int arr3[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int size = readPositiveInt("Enter number of elements: ");

    int *arr = new int[size];
    int *arr2 = new int[size];
    int *arr3 = new int[size];

    fillArrayRandomly(arr, size);
    fillArrayRandomly(arr2, size);
    sumTwoArrays(arr, arr2, arr3, size);

    printArray(arr, size, "\nArray 1 elements: ");
    printArray(arr2, size, "\nArray 2 elements: ");
    printArray(arr3, size, "\nArray 3 (sum of two arrays): ");

    delete[] arr;  // !!
    delete[] arr2; // !!
    delete[] arr3; // !!
    return 0;
}
