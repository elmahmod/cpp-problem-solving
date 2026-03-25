#include <iostream>
using namespace std;

enum eColor { red = 1, blue, green, yellow };

int main()
{
    int number;

    cout << "Choose the number of color\n";
    cout << "(1) red\n(2) blue\n(3) green\n(4) yellow\n";
    cin >> number;

    eColor color = static_cast<eColor>(number);

    if (color == red) 
    {
        system("color 4F");
    }
    else if (color == blue)
    {
        system("color 1F");
    }
    else if (color == green)
    {
        system("color 2F");
    }
    else if (color == yellow)
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
