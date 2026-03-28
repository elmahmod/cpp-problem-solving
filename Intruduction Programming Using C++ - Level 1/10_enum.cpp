#include <iostream>
using namespace std;

// enum = An enum is a distinct type whose value is restricted to a range of values.

enum eColor { Red = 10, Green, Yellow, Blue }; // starts from 10 -> 11 → 12 → ...
enum eGender { Male, Female };                 // by default starts from 0 → 1
enum eWeek { Sat = 1, Sun, Mon, Tue, Wed, Thu, Fri }; // starts from 1 → 2 → ...

int main() 
{
    eColor color = eColor::Red;
    eGender gender = eGender::Male;
    eWeek today = eWeek::Tue;

    // printing enum values
    cout << "Color: " << color << endl;  
    cout << "Gender: " << gender << endl; 
    cout << "Today: " << today << endl;   

    cin.get();
    return 0;
}
