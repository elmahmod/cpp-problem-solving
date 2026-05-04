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
            arr[i][j] = randomNumber(0, 10);
        }
    }
}

void printMatrix(const int arr[][3], const int &rows, const int &columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << setw(3) << arr[i][j] << '\t';
        }
        cout << endl;
    }
}

int sumColumn(int arr[][3], int column, int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += arr[i][column];
    }
    return sum;
}

void printSumColumns(int arr[][3], int rows, int columns)
{
    for (int i = 0; i < columns; i++)
    {
        cout << "Column " << i + 1 << " sum = " << sumColumn(arr, i, rows) << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];

    fillMatrix(arr, 3, 3);
    printMatrix(arr, 3, 3);

    return 0;
}
