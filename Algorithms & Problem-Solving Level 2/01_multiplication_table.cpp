#include <iostream>
using namespace std;

void displayHeader()
{
    cout << "\n\n\t\t\tMultiplication Table From 1 to 10\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << "  " << i << "\t";
    }
    cout << '\n';
    cout << string(85, '_') << endl;
}

void multiplicationTable()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << "\t|";
        for (int k = 1; k <= 10; k++)
        {
            cout << " " << i * k << "\t ";
        }
        cout << endl;
    }
}

int main()
{
    displayHeader();
    multiplicationTable();
    return 0;
}
