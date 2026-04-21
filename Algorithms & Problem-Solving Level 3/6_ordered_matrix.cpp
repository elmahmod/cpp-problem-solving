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

int main()
{
    int arr[3][3];
    fillMatrix(arr, 3, 3);
    printMatrix(arr, 3, 3);
    return 0;
}
