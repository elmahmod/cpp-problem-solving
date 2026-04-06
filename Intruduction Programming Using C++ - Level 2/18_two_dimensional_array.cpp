#include <iostream>
using namespace std;


int main()
{
    // int x[rows][cols];
    int x[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    for (int i = 0; i < 3; i++) // rows
    {
        for (int j = 0; j < 4; j++) // cols
        {
            cout << x[i][j] << " ";
        }
        cout << '\n';
    }
    cout << '\n';

    // multiplication
    int arr[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = (i+1) * (j+1);
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%02d ", arr[i][j]);
        }
        cout << '\n';
    }

    return 0;
}
