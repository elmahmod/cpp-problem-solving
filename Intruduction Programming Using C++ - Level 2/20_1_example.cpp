#include <iostream>
#include <vector>
using namespace std;

bool confirm(const string &message)
{
    char answer = 0;

    do
    {
        cout << message;
        answer = cin.get();
        answer = tolower(answer);

        if (answer != '\n')
            cin.ignore(1000, '\n');

    } while (answer != 'y' && answer != 'n' && answer != '\n');

    return answer == 'y' || answer == '\n';
}

int readNumber(const string &message)
{
    int number = 0;
    cout << message;
    cin >> number;

    while (cin.fail())
    {
        cout << "invalid input, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }

    cin.ignore(1000, '\n');
    return number;
}

void fillVector(vector<int> &vNumbers)
{
    do
    {
        int number = readNumber("\nenter a number: ");
        vNumbers.push_back(number);
    } while (confirm("add more? (y/n): "));
}

void printVector(const vector<int> &vNumbers, const string &message)
{
    cout << message;
    for (const int &number : vNumbers)
    {
        cout << number << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vNumbers;

    fillVector(vNumbers);
    printVector(vNumbers, "\nvector numbers: ");
    
    return 0;
}
