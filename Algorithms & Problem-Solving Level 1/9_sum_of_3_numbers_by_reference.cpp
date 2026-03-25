#include <iostream>
using namespace std;

void readThreeNumbers(int& num1, int& num2, int& num3)
{
    cout << "1. Enter number: ";
    cin >> num1;
    cout << "2. Enter number: ";
    cin >> num2;
    cout << "3. Enter number: ";
    cin >> num3;
}

int sumThreeNumbers(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

void printResult(int sum)
{
    cout << "\nSum of numbers is: " << sum << endl;
}

int main()
{
    int num1,num2,num3;
    readThreeNumbers(num1, num2, num3);
    printResult(sumThreeNumbers(num1, num2, num3));
    return 0;
}
