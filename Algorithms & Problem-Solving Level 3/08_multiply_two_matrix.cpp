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

void multiplyMatrices(int multipliedArr[][3], const int arr1[][3], const int arr2[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            multipliedArr[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arr1[3][3];
    int arr2[3][3];
    int multipliedArr[3][3];

    fillMatrix(arr1, 3, 3);
    printMatrix(arr1, 3, 3);

    fillMatrix(arr2, 3, 3);
    printMatrix(arr2, 3, 3);

    multiplyMatrices(multipliedArr, arr1, arr2, 3, 3);
    printMatrix(multipliedArr, 3, 3);
    return 0;
}
