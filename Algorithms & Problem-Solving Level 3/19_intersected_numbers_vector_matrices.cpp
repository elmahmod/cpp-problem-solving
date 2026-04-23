#include <iostream>
#include <iomanip>
#include <ctime>
#include <vector>
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

bool isNumberInVcetor(const vector<int> &vNumbers, int target)
{
    for (const int &n : vNumbers)
    {
        if (target == n)
            return true;
    }
    return false;
}

void fillVector(vector<int> &vNumbers, const int arr[][3], const int arr2[][3], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (isNumberInMatrix(arr2, rows, columns, arr[i][j]))
            {
                if (!isNumberInVcetor(vNumbers, arr[i][j]))
                {
                    vNumbers.push_back(arr[i][j]);
                }
            }
        }
    }
}

void printVector(const vector<int> &vNumbers, const string &message)
{
    cout << message;
    for (const int &number : vNumbers)
    {
        cout << number << " ";
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[3][3];
    int arr2[3][3];
    fillMatrix(arr, 3, 3);
    fillMatrix(arr2, 3, 3);

    printMatrix(arr, 3, 3);
    printMatrix(arr2, 3, 3);

    vector<int> vNumbers;
    fillVector(vNumbers, arr, arr2, 3, 3);
    printVector(vNumbers, "Intersected vNumbers: ");

    return 0;
}
