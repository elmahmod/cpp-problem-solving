#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vNumbers;
    // Capacity is dynamic
    // represent as vector stack (lifo = last in first out)

    // push
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    cout << "Numbers vector: ";
    for (int &number : vNumbers)
    {
        cout << number << " ";
    }
    return 0;
}
