#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t t = time(0);           // current time
    tm* now = localtime(&t);      // convert to local time struct

    cout << "year: " << 1900 + now->tm_year << endl;   // years since 1900
    cout << "month: " << 1 + now->tm_mon << endl;      // 0-11 → add 1
    cout << "day: " << now->tm_mday << endl;           // day of month

    cout << "hour: " << now->tm_hour << endl;          // 0-23
    cout << "min: " << now->tm_min << endl;            // minutes

    cout << "week day (since Sunday): " << now->tm_wday << endl; // 0-6
    cout << "year day (since Jan 1): " << now->tm_yday << endl;  // 0-365

    cout << "daylight saving time: " << now->tm_isdst << endl;   // 1=yes, 0=no

    return 0;
}