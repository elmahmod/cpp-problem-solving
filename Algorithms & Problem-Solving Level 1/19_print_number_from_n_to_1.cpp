#include <iostream>
using namespace std;

int readPositiveNumber(const string &message = "") // new constant function
{
    int number = 0;
    cout << message;
    cin >> number;
    while (cin.fail() || number < 1)
    {
        if (cin.fail())
            cout << "Invalid input, try again: ";
        else
            cout << "Input must be positive, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }
    cin.ignore(1000, '\n');
    return number;
}

void printRange_usingFor(int N)
{
    cout << "\nUsing for:\n";
    for (int i = N; i >= 1; i--)
    {
        cout << i << " ";
    }
    cout << '\n';
}

void printRange_usingWhile(int N)
{
    int i = N;
    cout << "\nUsing while:\n";
    while (i >= 1)
    {
        cout << i << " ";
        i--;
    }
    cout << '\n';
}

void printRange_usingDoWhile(int N)
{
    int i = N;
    cout << "\nUsing do-while:\n";
    do
    {
        cout << i << " ";
        i--;
    } while (i >= 1);
    cout << '\n';
}

void showMenu(int currentNumber)
{
    cout << string(35, '=') << endl;
    cout << "\tLoops Menu - N(" << currentNumber << ")\n";
    cout << string(35, '-') << endl;
    cout << "1. By for loop\n";
    cout << "2. By While loop\n";
    cout << "3. By do-While loop\n";
    cout << "4. Enter new number\n";
    cout << "5. Exit\n";
    cout << string(35, '-') << endl;
}

void handleOption(int option, int &N)
{
    switch (option)
    {
    case 1:
        printRange_usingFor(N);
        break;
    case 2:
        printRange_usingWhile(N);
        break;
    case 3:
        printRange_usingDoWhile(N);
        break;
    case 4:
        N = readPositiveNumber("Enter N: "); // by reference
        break;
    case 5:
        cout << "Exiting...\n";
        break;
    default:
        cout << "Invalid option!\n";
        break;
    }
}

int main()
{
    int N = readPositiveNumber("Enter N: ");
    int option;
    do
    {
        system("cls");
        showMenu(N);

        option = readPositiveNumber("Enter your option: ");
        handleOption(option, N);

        if (option != 4 && option != 5)
        {
            // replacing system("pause");
            cout << "\nPress Enter to continue...";
            cin.get();
        }

    } while (option != 5);

    return 0;
}
