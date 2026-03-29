#include <iostream>
using namespace std;

int myRound_simple(float number)
{
    if (number >= 0)
        return (int)(number + 0.5); // (+)
    else
        return (int)(number - 0.5); // (-)
}

int main()
{
    cout << myRound_simple(-10.8) << endl;
    cout << myRound_simple(50.7) << endl;
    cout << myRound_simple(50.3) << endl;
    cout << myRound_simple(50.5) << endl;
    return 0;
}
