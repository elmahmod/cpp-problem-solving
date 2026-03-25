#include <iostream>
using namespace std;

void breakStatementExample()
{
    cout << "\n=== for loop ===\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "-10" << endl;
        if (i == 5)
        {
            cout << "break at " << i << endl;
            break;
        }
    }

    cout << "\n=== while loop ===\n";

    int i = 1;
    while (i <= 10)
    {
        cout << i << "-10" << endl;
        if (i == 7)
        {
            cout << "break at " << i << endl;
            break;
        }
        i++;
    }
}

int searchNumberInArray(int arr[], int size, int target)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break; // comes out from the loop    
        }
    }
    return index;
}

int main()
{
    breakStatementExample();

    int arr[10] = {10, 2, 3, 4, 5, 600, 7, 8, 9, 1000};
    
    cout << "\nSearching for number 600\n";
    int index = searchNumberInArray(arr, 10, 600);
    if (index != -1)
    {
        cout << arr[index] << " found at [" << index << "]\n";
    }
    else
    {
        cout << "Number not found" << endl;
    }

    cin.get();
    return 0;
}
