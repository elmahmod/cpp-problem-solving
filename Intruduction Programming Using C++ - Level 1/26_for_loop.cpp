#include <iostream>
using namespace std;

int main()
{
    // for (initialization; condition; update)

    //Increasing loop (+)
    cout << "\n=== Increases ===\n";
    cout << "Starts from 1\n";
        for (int i = 1; i <= 5; i++)
    {
        cout << "Number: " << i << endl;
    }

    // Decreasing loop (-)
    cout << "\n=== Decreases ===\n";
    cout << "Starts from 5\n";
    for (int i = 5; i >= 1; i--)
    {
        cout << "Number: " << i << endl;
    }

    cin.get();
    return 0;
}
