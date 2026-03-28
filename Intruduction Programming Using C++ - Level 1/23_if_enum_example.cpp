#include <iostream>
using namespace std;

enum eColor { Red = 1, Blue, Green, Yellow };

int main()
{
    int number;

    cout << "Choose the number of color\n";
    cout << "(1) red\n(2) blue\n(3) green\n(4) yellow\n";
    cin >> number;

    eColor color = static_cast<eColor>(number);

    if (color == Red) 
    {
        system("color 4F");
    }
    else if (color == Blue)
    {
        system("color 1F");
    }
    else if (color == Green)
    {
        system("color 2F");
    }
    else if (color == Yellow)
    {
        system("color 6F");
    }
    else
    {
        cout << "Invalid choice!\n";
    }

    cin.get();
    return 0;
}
