#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "My name is Muhammed El-Mahmud, I love programming.";

    cout << "Length: " << s1.length() << '\n';
    cout << "Character at index 3: " << s1.at(3) << '\n';

    s1.append(" @programmingAdvices");
    cout << "After append: " << s1 << '\n';

    s1.insert(7, " Ali ");
    cout << "After insert: " << s1 << '\n';

    cout << "Substring (3,4): " << s1.substr(3, 4) << '\n';

    s1.push_back('X');
    cout << "After push_back: " << s1 << '\n';

    s1.pop_back();
    cout << "After pop_back: " << s1 << '\n';

    size_t posAli = s1.find("Ali");
    size_t posali = s1.find("ali");

    cout << "Find \"Ali\": " << posAli << '\n';
    cout << "Find \"ali\": " << posali << '\n';

    if (posali == string::npos)
    {
        cout << "\"ali\" not found\n";
    }

    s1.clear();
    cout << "After clear: \"" << s1 << "\"\n\n\n\n";

    string s = "Hello World";
    cout << s.front() << endl; // H
    cout << s.back() << endl;  // d

    s.replace(0, 5, "Hi");
    cout << s << endl;

    s.erase(2, 3);
    cout << s << endl;

    if (s.empty())
        cout << "Empty\n";
    else
        cout << "Not Empty\n";

    return 0;
}
