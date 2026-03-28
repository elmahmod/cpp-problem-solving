#include <iostream>
using namespace std;

string readString(const string &messages)
{
    string text;
    cout << messages;
    cin >> text;

    cin.ignore(1000, '\n');
    return text;
}

bool findPassword(const string &password)
{
    string word = "";
    int counter = 1;

    for (int i = 'A'; i <= 'Z'; i++)
    {
        for (int k = 'A'; k <= 'Z'; k++)
        {
            for (int j = 'A'; j <= 'Z'; j++)
            {
                word = string(1, i) + string(1, k) + string(1, j);

                cout << "Trail [" << counter << "]: " << word << endl;
                if (word == password)
                {
                    cout << "password is " << word << endl;
                    cout << "found after " << counter << " trail(s)\n";
                    return true;
                }
                counter++;  
            }
        }
    }
    return false;
}

int main()
{
    findPassword(readString("Enter a password: "));
    return 0;
}
