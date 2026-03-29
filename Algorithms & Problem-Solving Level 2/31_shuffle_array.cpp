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

int *fillArrayRandomly(int size)
{
    int *arr = new int[size];

    for (int i = 0; i < size; i++)
        arr[i] = randomNumber(1, 10);

    return arr;
}

void printArray(const int arr[], int size, const string &message = "") // more reusable now
{
    cout << message;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void shuffleArray(int arr[], int size)
{
    // Fisher–Yates shuffle (algorithm)
    for (int i = size - 1; i > 0; i--)
    {
        // random index from 0 to i, then swap it with arr[i].
        int j = randomNumber(0, i);
        swap(arr[i], arr[j]); 
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int size = readPositiveInt("Enter number of elements: ");
    int *arr = fillArrayRandomly(size);

    printArray(arr, size, "\nArray elements before shuffle: ");
    
    shuffleArray(arr, size);
    
    printArray(arr, size, "\nArray elements after shuffle: ");

    delete[] arr;
    return 0;
}
