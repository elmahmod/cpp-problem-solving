#include <iostream>
#include <string>
using namespace std;

string trimLeft(const string& text)
{
    string trimmed;

    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] != ' ')
        {
            trimmed = text.substr(i);
            break;
        }
    }

    return trimmed;
}

string trimRight(const string& text)
{
    string trimmed;

    for (int i = text.length() - 1; i >= 0; i--)
    {
        if (text[i] != ' ')
        {
            trimmed = text.substr(0, i + 1); 
            break; 
        }
    }

    return trimmed;
}

string trim(const string& text)
{
    return trimLeft(trimRight(text));
}

int main()
{
    cout << "[" << trim("  hello my friend  ") << "]\n";
    cout << "[" << trimLeft("   HI my friend     ") << "]\n";
    cout << "[" << trimRight("  helo my friend      ") << "]\n";
    return 0;
}
