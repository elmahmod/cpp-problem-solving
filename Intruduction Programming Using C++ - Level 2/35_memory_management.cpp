#include <iostream>
using namespace std;

int main()
{
    int *ptrX;
    float *ptrY;

    ptrX = new int;
    ptrY = new float;

    *ptrX = 14;
    *ptrY = 35.3;

    cout << *ptrX << endl;
    cout << *ptrY << endl;

    delete ptrX;
    delete ptrY;
    return 0;
}
