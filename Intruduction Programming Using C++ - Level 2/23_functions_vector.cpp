#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    // be careful before using front(), back() without checking if the size > 0
    cout << "\nFirst element: " << vNumbers.front() << endl;
    cout << "\nLast element: " << vNumbers.back() << endl;

    cout << "\nSize: " << vNumbers.size() << endl;
    cout << "\nCapacity: " << vNumbers.capacity() << endl;

    if (vNumbers.empty())
    cout << "\nis empty" << endl;
    else
    cout << "\nis not empty" << endl;
    
    cout << "\nClear all elements\n";
    vNumbers.clear();
    cout << "size after clearing: " << vNumbers.size() << endl;
    
    return 0;
}
