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
        cin.fail() ? cout << "Invalid Input, try again: " : cout << "Number must be positive, try again: ";
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

void printArray(const int arr[], int size, const string &message = "")
{
    cout << message;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
        
    cout << endl;
}

void fillArrayRandomly(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        arr[i] = randomNumber(-100, 100);
}

int countPositiveNumbers(const int arr[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            counter++;
    }
    return counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int size = readPositiveInt("Enter number of elements: ");
    int *arr = new int[size];
    fillArrayRandomly(arr, size);

    printArray(arr, size, "\nArray elements: ");
    cout << "positive numbers count is: " << countPositiveNumbers(arr, size) << endl;

    delete[] arr;
    return 0;
}
