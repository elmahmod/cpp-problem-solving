#include <iostream>
using namespace std;

string toLowerFirstLetters(string word)
{
    bool isFirstLetter = true;
    for (int i  = 0; i < word.length(); i++)
    {
        if (isFirstLetter && word[i] != ' ')
        {
            word[i] = tolower(word[i]);
        }
        isFirstLetter = (word[i] == ' ');
    }
    return word;
}

int main()
{
    string name = "Muhamed El Mahmud";
    cout << name << endl;
    cout << toLowerFirstLetters(name) << endl;
    return 0;
}
