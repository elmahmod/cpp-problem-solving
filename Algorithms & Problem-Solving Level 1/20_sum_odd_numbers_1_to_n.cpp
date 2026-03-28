#include <iostream>
#include <limits>
using namespace std;

enum enNumberType
{
    Odd = 1,
    Even = 2
};

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

void printResult(int result, const string &messages = "")
{
    cout << messages << result << endl;
}

enNumberType checkNumberType(int number)
{
    return (number % 2 == 0) ? Even : Odd;
}

// Sum odd numbers using loops
int sumRange_usingFor(int N)
{
    int sum = 0;
    cout << "\nUsing for:\n";
    for (int i = 1; i <= N; i++)
    {
        if (checkNumberType(i) == Odd)
            sum += i;
    }
    return sum;
}

int sumRange_usingWhile(int N)
{
    int sum = 0;
    int i = 1;
    cout << "\nUsing while:\n";
    while (i <= N)
    {
        if (checkNumberType(i) == Odd)
            sum += i;
        i++;
    }
    return sum;
}

int sumRange_usingDoWhile(int N)
{
    int sum = 0;
    int i = 1;
    cout << "\nUsing do-while:\n";
    do
    {
        if (checkNumberType(i) == Odd)
            sum += i;
        i++;
    } while (i <= N);
    return sum;
}
//

void showMenu(int currentNumber)
{
    cout << string(35, '=') << endl;
    cout << "\tLoops Menu - N(" << currentNumber << ")\n";
    cout << string(35, '-') << endl;
    cout << "1. Sum By for loop\n";
    cout << "2. Sum By While loop\n";
    cout << "3. Sum By do-While loop\n";
    cout << "4. Enter new number\n";
    cout << "5. Exit\n";
    cout << string(35, '-') << endl;
}

void handleOption(int option, int &N)
{
    switch (option)
    {
    case 1:
        printResult(sumRange_usingFor(N), "Sum of odd numers: ");
        break;
    case 2:
        printResult(sumRange_usingWhile(N), "sum of odd numbers: ");
        break;
    case 3:
        printResult(sumRange_usingDoWhile(N), "sum of odd numbers: ");
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // removing buffer inputs
        }

    } while (option != 5);

    return 0;
}
