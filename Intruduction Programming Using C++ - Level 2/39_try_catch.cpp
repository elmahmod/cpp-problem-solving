#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num{1, 2, 3, 4, 5};
    
    // avoid using try-catch bacause it can slow down the program
    // instead, focus on validation before accessing data


    // exception-handing
    try
    {
        cout << num.at(5)  << endl; // throws exception
    }
    catch(...)
    {
        cout << "out of size\n";
    }
    return 0;
}
