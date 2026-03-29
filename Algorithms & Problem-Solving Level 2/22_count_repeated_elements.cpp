#include <iostream>
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

int readNumber(const string &message = "")
{
    int number = 0;
    cout << message;
    cin >> number;

    while (cin.fail())
    {
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }

    cin.ignore(1000, '\n');
    return number;
}

int *readArray(int &size)
{
    size = readPositiveInt("Enter number of elements: ");

    int *arr = new int[size];

    cout << "\nEnter array elements\n";
    for (int i = 0; i < size; i++)
        arr[i] = readNumber("Element [" + to_string(i + 1) + "]: ");

    return arr;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int countElementArray(int arr[], int size, int target)
{
    int counter = 0;

    for (int i = 0; i < size; i++)
        if (arr[i] == target)
            counter++;

    return counter;
}

int main()
{
    int size = 0;
    int *arr = readArray(size);

    int targetNumber = readNumber("\nEnter the number you want to check: ");

    cout << "\nOriginal array: ";
    printArray(arr, size);

    cout << targetNumber << " is repeated "
         << countElementArray(arr, size, targetNumber)
         << " time(s)\n";

    delete[] arr;

    return 0;
}