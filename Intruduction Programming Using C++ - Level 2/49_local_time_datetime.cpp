#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t = time(0);        // get current time (seconds since 1970)

    char* dt = ctime(&t);      // convert time to readable local string
    cout << "local date and time is: " << dt << endl;

    tm* gmtm = gmtime(&t);     // convert time to UTC (GMT) structure
    dt = asctime(gmtm);        // convert UTC structure to string
    cout << "UTC date and time is: " << dt << endl;

    return 0;
}