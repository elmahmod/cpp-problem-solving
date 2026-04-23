#include <iostream>
#include <ctime>
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

bool isSparseMatrix(const int arr[][3], int rows, int columns)
{
    int firstElement = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i == j && arr[i][j] != firstElement)
                return false;
            if (i != j && arr[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int arr[3][3] = {{8, 0, 0}, {0, 8, 0}, {0, 0, 8}};
    printMatrix(arr, 3, 3);

    if (isSparseMatrix(arr, 3, 3))
        cout << "matrix is scaler\n";
    else
        cout << "matrix is not scaler\n";

    return 0;
}
