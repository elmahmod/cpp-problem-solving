#include <iostream>
using namespace std;

int main()
{
    int size = 0;

    cout << "Enter number of students: ";
    cin >> size;

    int* ptr = new int[size]; // dynamic array

    cout << "\nEnter students grades:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> ptr[i];
    }

    cout << "\nStudents grades:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << i + 1 << " = " << ptr[i] << endl;
    }

    delete[] ptr; // free memory

    return 0;
}
