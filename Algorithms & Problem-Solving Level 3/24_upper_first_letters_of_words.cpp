#include <iostream>
using namespace std;

string toUpperFirstLetters(string word)
{
    bool isFirstLetter = true;
    for (int i  = 0; i < word.length(); i++)
    {
        if (isFirstLetter && word[i] != ' ')
        {
            word[i] = toupper(word[i]);
        }
        isFirstLetter = (word[i] == ' ');
    }
    return word;
}

int main()
{
    string name = "muhamed el mahmud";
    cout << name << endl;
    cout << toUpperFirstLetters(name) << endl;
    return 0;
}
