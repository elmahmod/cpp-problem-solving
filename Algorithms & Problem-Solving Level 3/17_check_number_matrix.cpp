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

bool isNumberInMatrix(const int arr[][3], int rows, int columns, int target)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] == target)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = {{0, 0, 0}, {4, 0, 1}, {1, 1, 8}};
    printMatrix(arr, 3, 3);

    if (isNumberInMatrix(arr, 3, 3, 4))
        cout << "4 number exists in matrix\n";
    else
        cout << "4 number does not exist in matrix\n";

    return 0;
}
