#include <iostream>
using namespace std;

int* readArray(int &size)
{
    cout << "How many numbers do you want to enter: ";
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }

    return arr;
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

float averageArray(int arr[], int size)
{
    if (size == 0)
        return 0;
    return static_cast<float>(sumArray(arr, size)) / size;
}

int main()
{
    int size = 0;
    int* arr = readArray(size);

    cout << "\nNumbers: ";
    PrintArray(arr, size);

    cout << "\nSum = " << sumArray(arr, size) << endl;
    cout << "Average = " << averageArray(arr, size) << endl;

    delete[] arr; // free memory
    
    cin.get();
    return 0;
}
