#include <iostream>
#include <limits> // numeric_limits<>()
using namespace std;

// read only number
int readNumber()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    while (cin.fail()) // validate number
    {
        cout << "Invalid number, enter a valid one: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> number;
    }

    // numeric_limits<streamsize>::max() → ignore a very large number of characters.
    // Enter a number: 5abc ((cin >> number) reads 5 and leaves abc\n in the buffer.)
    // '\n' → stop ignoring when the end of the line is reached.
    // Effect: clears all remaining input in the buffer up to the newline.
    // This ensures that the next input operation starts clean, without leftover characters interfering.
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // try the code with it and without it
    return number;
}

int main()
{
    // enter a number : 5asd
    int number = readNumber();
    cout << "You entered: " << number << endl; // 5

    // read everything remaining on this line
    string leftovers;
    getline(cin, leftovers); // "asd"

    if (!leftovers.empty())
        cout << "Leftover characters in buffer: \"" << leftovers << "\"" << endl;

    return 0;
}
