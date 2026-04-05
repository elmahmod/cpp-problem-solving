#include <iostream>
#include "libs/myLib.h" // local libraray
using namespace std;
using namespace myLib; // allows using functions directly without myLib:: (not recommended)

int main()
{
    // using namespace
    myLib::test();
    cout << myLib::sum2Numbers(10, 5) << endl;

    // not using namespace
    test();
    cout << sum2Numbers(10, 5) << endl;
    return 0;
}
