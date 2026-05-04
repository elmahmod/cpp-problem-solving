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
    for (int i = 0; i < rows; i++) // rows
    {
        for (int j = 0; j < columns; j++) // columns
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

void printMiddleRow(const int arr[][3], int rows, int columns)
{
    int middle = rows / 2;
    cout << "middle row of matrix is: \n";
    for (int i = 0; i < columns; i++)
    {
        cout << arr[middle][i] << '\t';
    }
    cout << endl;
}

void printMiddleColumn(const int arr[][3], int rows, int columns)
{
    int middle = columns / 2;
    cout << "middle column of matrix is: \n";
    for (int i = 0; i < rows; i++)
    {
        cout << arr[i][middle] << '\t';
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];

    fillMatrix(arr, 3, 3);
    printMatrix(arr, 3, 3);

    printMiddleRow(arr, 3, 3);
    printMiddleColumn(arr, 3, 3);

    return 0;
}
