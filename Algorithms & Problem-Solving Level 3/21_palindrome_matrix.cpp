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

bool isPalindromeMatrix(const int arr[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns / 2; j++)
        {
            if (arr[i][j] != arr[i][columns - j - 1])
                return false;
        }
    }
    return true;
}

int main()
{
    int arr[3][3] =
    {
        {1, 2, 1},
        {3, 4, 3},
        {5, 6, 5}
    };

    printMatrix(arr, 3, 3);

    if (isPalindromeMatrix(arr, 3, 3))
        cout << "Palindrome Matrix\n";
    else
        cout << "Not Palindrome Matrix\n";

    return 0;
}