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

void copyReverseArray(const int arr[], int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr2[i] = arr[size - 1 - i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int size = readPositiveInt("Enter number of elements: ");
    int *arr = new int[size];
    fillArrayRandomly(arr, size);
    
    int *arr2 = new int[size];
    copyReverseArray(arr, arr2, size);

    printArray(arr, size, "\nArray 1 elements before shuffle: ");
    printArray(arr2, size, "\nArray 2 elements after copying as reversed: ");

    delete[] arr;
    return 0;
}
