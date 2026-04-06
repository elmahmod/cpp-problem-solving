#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vNumbers;
    // represent as vector stack

    // push (add)
    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    // pop (remove) , lifo = last in first out
    vNumbers.pop_back(); // 50
    vNumbers.pop_back(); // 40
    vNumbers.pop_back(); // 30
    vNumbers.pop_back(); // 20
    vNumbers.pop_back(); // 10
    // vNumbers.pop_back(); // ??(error)

    if (!vNumbers.empty())
        vNumbers.pop_back();
    // OR
    if (vNumbers.size() > 0)
        vNumbers.pop_back();

    cout << "Numbers vector: ";
    for (int &number : vNumbers)
    {
        cout << number << " ";
    }
    return 0;
}
