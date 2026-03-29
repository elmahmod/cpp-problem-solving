#include <iostream>
using namespace std;

int readPositiveInt(const string &message = "")
{
    int number = 0;
    cout << message;
    cin >> number;

    while (cin.fail() || number < 1)
    {
        if (cin.fail())
            cout << "Invalid input, try again: ";
        else
            cout << "Number must be positive, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }
    cin.ignore(1000, '\n');
    return number;
}

void printArray(const int arr[], int size, const string &message = "")
{
    cout << message;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

bool confirm(const string &message)
{
    char answer = 0;
    do
    {
        cout << message;
        answer = cin.get();
        answer = tolower(answer);

        if (answer != '\n') // don't include '\n'
            cin.ignore(1000, '\n');

    } while (answer != 'y' && answer != 'n' && answer != '\n');
    return answer == 'y' || answer == '\n';
}

void addArrayElement(int arr[], int &size, int number)
{
    arr[size] = number;
    size++;
}

void InputNumbersIntoArray(int arr[], int &size)
{

    int number = 0;
    do
    {
        number = readPositiveInt("Enter a number: ");
        addArrayElement(arr, size, number);

    } while (confirm("Do you want to add more? (y/n): "));
}

int main()
{
    int arr[100];
    int size = 0;

    InputNumbersIntoArray(arr, size);
    printArray(arr, size, "Array elements: ");
    return 0;
}