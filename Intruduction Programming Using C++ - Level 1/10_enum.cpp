#include <iostream>
using namespace std;

// enum = An enum is a distinct type whose value is restricted to a range of values.

enum eColor { red = 10, green, yellow, blue }; // starts from 10 -> 11 → 12 → ...
enum eGender { male, female };                 // by default starts from 0 → 1
enum eWeek { sat = 1, sun, mon, tue, wed, thu, fri }; // starts from 1 → 2 → ...

int main() 
{
    eColor color = eColor::red;
    eGender gender = eGender::male;
    eWeek today = eWeek::tue;

    // printing enum values
    cout << "Color: " << color << endl;  
    cout << "Gender: " << gender << endl; 
    cout << "Today: " << today << endl;   

    cin.get();
    return 0;
}
