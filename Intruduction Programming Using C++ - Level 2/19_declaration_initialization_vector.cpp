#include <iostream>
#include <vector> // for using vector
using namespace std;

// vector = dynamic array

int main()
{
    // std::vector<T> vector_name;
    vector<int> vNumbers = {10, 20, 30, 40, 50};

    // ranged-loop

    cout << "Numbers vector: ";
    for (int number : vNumbers) // number will take vNumbers as copy (not recommended)
    {
        cout << number << " ";
    }
    
    cout << "\nNumbers vector using referense: ";
    for (int &number : vNumbers) // number will piont to vNumbers's address without copying (recommended)
    {
        cout << number << " ";
    }

    return 0;
}
