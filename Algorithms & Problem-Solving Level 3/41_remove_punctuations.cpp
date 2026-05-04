#include <iostream>
#include <string>
using namespace std;

string removePunctuations(string text)
{
    string rp;
    for (int i = 0; i < text.length(); i++)
    {
        if (!ispunct(text[i]))
            rp += text[i];
    }
    return rp;
}

int main()
{
    cout << removePunctuations("my: name@ is, muhammed;") << endl;
    return 0;
}
