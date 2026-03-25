#include <iostream>
using namespace std;

// By Value: copy (no change to original)
void byValue(int numValue)
{
    numValue = 20;
}

// By Reference: modifies original
void byReference(int &numReference)
{
    numReference = 6;
}

// Swap using reference
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int numValue = 10;
    int numReference = 3;

    cout << "=== By Value ===\n";
    cout << "Before: " << numValue << endl;
    byValue(numValue);
    cout << "After : " << numValue << endl;

    cout << "\n=== By Reference ===\n";
    cout << "Before: " << numReference << endl;
    byReference(numReference);
    cout << "After : " << numReference << endl;

    // Swap Example
    cout << "\n=== Swap ===\n";
    int x = 5, y = 9;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap : x = " << x << ", y = " << y << endl;

    cin.get();
    return 0;
}
