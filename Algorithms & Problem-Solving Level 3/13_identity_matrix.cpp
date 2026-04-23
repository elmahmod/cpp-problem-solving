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

bool isIdentityMatrix(const int arr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (i == j & arr[i][j] != 1)
                return false;
            if (i != j && arr[i][j] != 0)
                return false;
        }
    }
    return true;
}

int main()
{
    int arr[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

    printMatrix(arr, 3, 3);

    if (isIdentityMatrix(arr, 3, 3))
    {
        cout << "matrix is identity\n";
    }
    else
    {
        cout << "matrix is not identity\n";
    }

    return 0;
}
