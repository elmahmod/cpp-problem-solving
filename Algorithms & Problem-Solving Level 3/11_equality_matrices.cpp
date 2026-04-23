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

int sumMatrix(const int arr[][3], int rows, int columns)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}

bool areMatricesTypical(const int arr[][3], const int arr2[][3], int rows, int columns)
{
    return sumMatrix(arr, 3, 3) == sumMatrix (arr2, 3, 3);
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int arr2[3][3];

    fillMatrix(arr, 3, 3);
    printMatrix(arr, 3, 3);

    fillMatrix(arr2, 3, 3);
    printMatrix(arr2, 3, 3);

    if (areMatricesTypical(arr, arr2, 3, 3))
    {
        cout << "matrices are equal\n";
    }
    else
    {
        cout << "matrices are not equal\n";
    }

    return 0;
}
