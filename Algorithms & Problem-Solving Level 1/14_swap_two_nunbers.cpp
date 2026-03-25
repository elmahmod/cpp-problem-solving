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

void swap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void printNumbers(int num1, int num2)
{
    cout << "number 1: " << num1 << endl;
    cout << "number 2: " << num2 << endl;
}
 
int main()
{
    int num1, num2;
    num1 = readNumber("Enter number 1: ");
    num2 = readNumber("Enter number 2: ");
    
    cout << "\n=== Before Swap ===\n";
    printNumbers(num1, num2);
    
    swap(num1, num2);

    cout << "\n=== After Swap ===\n";
    printNumbers(num1, num2);
    return 0;
}
