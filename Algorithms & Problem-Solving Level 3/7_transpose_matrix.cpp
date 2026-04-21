#include <iostream>
#include <iomanip>
using namespace std;

void fillMatrix(int arr[][3], int rows, int columns)
{
    int counter = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = ++counter;
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

void transposeMatrix(int arrTransposed[][3], int arr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            arrTransposed[i][j] = arr[j][i];
        }
    }
}

int main()
{
    int arr[3][3];
    int arrTransposed[3][3];
    fillMatrix(arr, 3, 3);
    printMatrix(arr, 3, 3);

    transposeMatrix(arrTransposed, arr, 3, 3);
    printMatrix(arrTransposed, 3, 3);
    return 0;
}
