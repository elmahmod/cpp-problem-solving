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

bool isPrimeNumber(int number)
{
    if (number <= 1)
        return false;

    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
            return false;
    }

    return true;
}

void addArrayElement(int arr[], int &size, int number)
{
    arr[size++] = number;
}

void copyPrimesInArray(const int arr[], int arr2[], int size, int &destSize)
{
    for (int i = 0; i < size; i++)
    {
        if (isPrimeNumber(arr[i]))
            addArrayElement(arr2, destSize, arr[i]);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int size = readPositiveInt("Enter number of elements: ");
    int *arr = new int[size];
    fillArrayRandomly(arr, size);

    int destSize = 0;
    int *arr2 = new int[size]; // assuming size
    copyPrimesInArray(arr, arr2, size, destSize);

    printArray(arr, size, "\nArray 1 elements: ");
    printArray(arr2, destSize, "Array 2 (Prime numbers): ");

    delete[] arr;
    delete[] arr2;
    return 0;
}
