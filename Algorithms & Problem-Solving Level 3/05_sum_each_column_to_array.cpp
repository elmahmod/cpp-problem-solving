#include <iostream>
#include <iomanip>
#include <ctime>
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

void printMatrix(const int arr[][3], const int&rows, const int&columns)
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

void fillArrayColumnSums(int arr1[], int arr2[][3], int rows, int columns)
{
    for (int i = 0; i < columns; i++)
    {
        arr1[i] = sumColumn(arr2, i, rows);
    }
}

void printColumnSums(const int arr[], const int& size)
{
    for (int i = 0; i < size; i++)
    {
        cout <<"Column "  << i+1 << " sum = " << arr[i] << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[3];
    int arr2[3][3];

    fillMatrix(arr2, 3, 3);
    printMatrix(arr2, 3, 3);

    fillArrayColumnSums(arr1, arr2, 3, 3);
    printColumnSums(arr1, 3);
    return 0;
}
