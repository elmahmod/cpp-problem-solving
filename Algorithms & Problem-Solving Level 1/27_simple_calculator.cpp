#include <iostream>
using namespace std;

enum enOperationType
{
    Add = '+',
    Subtract = '-',
    Multiply = '*',
    Divide = '/'
};

float readNumber(const string &message = "")
{
    float number = 0;
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

enOperationType readOperationType()
{
    char op = 0;
    cout << "Enter Operation type: [+, -, *, /]: ";
    cin >> op;

    while (op != '+' && op != '-' && op != '*' && op != '/')
    {
        cout << "invalid operation type, try again: ";
        cin.ignore(1000, '\n'); // clear the buffer (example: a+ -> a removing + from next step)
        cin >> op;
    }
    cin.ignore(1000, '\n'); // clear the buffer
    return static_cast<enOperationType>(op);
}

float simpleCalculator(float firstNumber, float secondNumber, enOperationType opType)
{
    switch (opType)
    {
    case Add:
        return firstNumber + secondNumber;
    case Subtract:
        return firstNumber - secondNumber;
    case Multiply:
        return firstNumber * secondNumber;
    case Divide:
    {
        if (secondNumber == 0)
        {
            if (firstNumber == 0)
                cout << "\n0/0 invalid!\n";
            else
                cout << "\nInvalid divided by zero\n";
            exit(0);
        }
        return firstNumber / secondNumber;
    }
    default:
        cout << "\nInvalid operation type\n";
        exit(0);
    }
}

bool confirm(const string &message)
{
    char answer;
    do
    {
        cout << message;
        answer = cin.get();
        answer = tolower(answer);

        if (answer != '\n')
            cin.ignore(1000, '\n');

    } while (answer != 'y' && answer != 'n' && answer != '\n');
    return (answer == 'y' || answer == '\n');
}

void printResult(float firstNumber, float secondNumber, enOperationType opType)
{
    float result = 0;
    result = simpleCalculator(firstNumber, secondNumber, opType);

    cout << firstNumber << " " << (char)opType << " " << secondNumber << " = " << result << endl;
}

int main()
{
    float firstNumber, secondNumber;
    enOperationType opType;

    do
    {
        firstNumber = readNumber("Enter first number: ");
        secondNumber = readNumber("Enter second number: ");
        opType = readOperationType();

        printResult(firstNumber, secondNumber, opType);

    } while (confirm("\ndo you want to continue? (y/n) "));

    return 0;
}
