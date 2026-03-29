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

int *fillArrayRandomly(int &size)
{
    size = readPositiveInt("Enter number of elements: ");
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
        arr[i] = randomNumber(1, 10);

    return arr;
}

void printArray(int arr[], int size)
{
    cout << "\nArray elements: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    srand((unsigned)time(NULL));
    int size = 0;
    int*arr = fillArrayRandomly(size);

    printArray(arr, size);

    cout << "\nSum of all elements is: " << sumArray(arr, size) << endl;

    delete[] arr; // !!
    return 0;
}
