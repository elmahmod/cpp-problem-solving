#include <iostream>
#include <string>
using namespace std;

int countWords(string text, const string delimiter)
{
    int counter = 0;
    string word;
    size_t pos;
    
    while ((pos = text.find(delimiter)) != string::npos)
    {
        word = text.substr(0, pos);
        if (!word.empty())
            counter++;
        text.erase(0, pos + delimiter.length());
    }
    
    if (!text.empty())
        counter++;
    return counter;
}

int main()
{
    cout << countWords("hello my friend", " ") << endl;
    return 0;
}
