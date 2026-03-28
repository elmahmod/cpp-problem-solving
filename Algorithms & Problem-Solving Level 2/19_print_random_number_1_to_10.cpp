#include <iostream>
#include <cstdlib> // for random numbers
using namespace std;

int randomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}

int main()
{
    srand((unsigned)time(NULL)); // generator random numbers, called only once

    cout << "Random numbers\n";
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;
    
    cout << "\nRandom numbers from 1 to 10\n";
    cout << randomNumber(1, 10) << endl;
    cout << randomNumber(1, 10) << endl;
    cout << randomNumber(1, 10) << endl;
    return 0;
}
