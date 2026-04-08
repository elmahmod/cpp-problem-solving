#include <iostream>
using namespace std;

int main()
{
    float f1 = 10.5;

    // pointer to float
    float *ptr = &f1; // pointer must match the type
    cout << "Value of float pointer: " << *ptr << endl;

    // void pointer
    void *ptr2 = &f1;                                                                            // void pointer can point to any type
    cout << "Value of void pointer (cast to float*): " << *(static_cast<float *>(ptr2)) << endl; // you have to casting it to variable type

    int x = 4;
    ptr2 = &x;
    // ptr = &x; error
    cout << "\nValue of void pointer (cast to int*): " << *(static_cast<int *>(ptr2)) << endl; // you have to casting it to variable type

    return 0;
}
