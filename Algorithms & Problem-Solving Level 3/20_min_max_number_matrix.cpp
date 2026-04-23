#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
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

int minNumberInMatrix(const int arr[][3], int rows, int columns)
{
    int min = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    return min;
}

int maxNumberInMatrix(const int arr[][3], int rows, int columns)
{
    int max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    return max;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];

    fillMatrix(arr, 3, 3);
    printMatrix(arr, 3, 3);

    cout << "Min = " << minNumberInMatrix(arr, 3, 3) << endl;
    cout << "Max = " << maxNumberInMatrix(arr, 3, 3) << endl;

    return 0;
}
