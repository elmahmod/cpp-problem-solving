#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

void fillMatrix(int arr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = randomNumber(1, 10);
        }
    }
}

void printMatrix(const int arr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << setw(3) << arr[i][j] << '\t';
        }
        cout << endl;
    }
    cout << endl;
}

int countNumberFrequency(const int arr[][3], int rows, int columns, int target)
{
    int counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == target)
                counter++;
        }
    }
    return counter;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];

    fillMatrix(arr, 3, 3);
    printMatrix(arr, 3, 3);

    int target;
    cout << "Enter number: ";
    cin >> target;

    cout << "Frequency = "
         << countNumberFrequency(arr, 3, 3, target);

    return 0;
}
