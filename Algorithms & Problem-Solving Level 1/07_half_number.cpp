#include <iostream>
using namespace std;

int readNumber()
{
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    while (cin.fail())
    {
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }
    return number;
}

float calculateHalf(int number)
{
    return number / 2.0; // no need to casting the int just add fraction to 2
}

void printHalf(int number)
{
    cout << "half of " << number << " is: " << calculateHalf(number) << endl;
} 

// advanced
bool confirm()
{
    char answer;
    cin.ignore(1000, '\n'); // remove '\n' from cin >> readNumber() in the buffer
    do
    {
        cout << "Again? (y/n): ";
        answer = cin.get();
        answer = tolower(answer);

        if (answer != '\n')
            cin.ignore(1000, '\n');

    } while (answer != 'y' && answer != 'n' && answer != '\n');
    return (answer == 'y' || answer == '\n');
}

int main()
{
    do
    {
        printHalf(readNumber());
    } while (confirm());

    return 0;
}
