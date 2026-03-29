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
        arr[i] = randomNumber(1, 25);
}

void printArray(const int arr[], int size, const string &message = "") // more reusable now
{
    cout << message;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int findNumberIndexInArray(const int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

bool isNumberInArray(int arr[], int size, int number)
{
    return findNumberIndexInArray(arr, size, number) != -1;
}

// bool isNumberInArray(const int arr[], int size, int number) (more reusable)
// {
//     for (int i = 0; i < size; i++)
//         if (arr[i] == number)
//             return true;
//     return false;
// }

int main()
{
    srand((unsigned)time(NULL));

    int size = readPositiveInt("Enter number of elements: ");
    int *arr = new int[size];
    fillArrayRandomly(arr, size);

    printArray(arr, size, "\nArray elements: ");

    int target = readPositiveInt("Enter a number to search for: ");
    if (isNumberInArray(arr, size, target))
        cout << "\nfound\n";
    else
        cout << "\nis not found!\n";

    delete[] arr;
    return 0;
}
