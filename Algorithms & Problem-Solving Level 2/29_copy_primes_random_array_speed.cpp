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

int* fillArrayRandomly(int &size)
{
    size = readPositiveInt("Enter number of elements: ");

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
        arr[i] = randomNumber(1, 100);

    return arr;
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

void copyPrimesInArray(const int arr[], int arr2[], int size, int &primeCount)
{
    primeCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (isPrimeNumber(arr[i]))
        {
            arr2[primeCount] = arr[i];
            primeCount++;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int size = 0;
    int *arr = fillArrayRandomly(size);

    // We are temporarily reserving the largest possible size
    int *arr2 = new int[size];

    int primeCount = 0;
    copyPrimesInArray(arr, arr2, size, primeCount);

    printArray(arr, size, "\nArray 1 elements: ");
    printArray(arr2, primeCount, "Prime numbers: ");

    delete[] arr; // !!
    delete[] arr2; // !!
    return 0;
}
