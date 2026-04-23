#include <iostream>
#include <iomanip>
using namespace std;

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

bool isSparseMatrix(const int arr[][3], int rows, int columns)
{
    int matrixSize = rows * columns;
    int zeros = countNumberFrequency(arr, rows, columns, 0);
    int otherNumbersCount = matrixSize - zeros;

    return zeros > otherNumbersCount;
}

int main()
{
    int arr[3][3] = {{0, 0, 0}, {0, 0, 1}, {1, 1, 8}};
    printMatrix(arr, 3, 3);

    if (isSparseMatrix(arr, 3, 3))
        cout << "matrix is sparse\n";
    else
        cout << "matrix is not sparse\n";

    return 0;
}
