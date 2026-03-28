#include <iostream>
using namespace std;

void printAllThreeLetterWords()
{
    for (int i = 'A'; i <= 'Z'; i++)
    {
        for (int k = 'A'; k <= 'Z'; k++)
        {
            for (int j = 'A'; j <= 'Z'; j++)
            {
                cout << char(i) << char(k) << char(j) << endl;
            }
        }
    }
}

int main()
{
    printAllThreeLetterWords();
    return 0;
}
