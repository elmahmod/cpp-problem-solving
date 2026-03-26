#include <iostream>
using namespace std;

int readNumber(const string &message = "")
{
    int number = 0;
    cout << message;
    cin >> number;
    while (cin.fail())
    {
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }
    cin.ignore(1000, '\n');
    return number;
}

int sumUntilMinus99()
{
    int sum = 0, counter = 0, number = 0;
    do
    {
        counter++;
        number = readNumber("Enter a number " + to_string(counter) + " : ");

        if (number != -99)
            sum += number;

    } while (number != -99);
    return sum;
}

int main()
{
    int result = sumUntilMinus99();
    cout << "result : " << result << endl;
    return 0;
}
