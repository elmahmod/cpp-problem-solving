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

float averageThreeNumbers(int num1, int num2, int num3)
{
    return static_cast<float>(sumThreeNumbers(num1, num2, num3)) / 3;
}

void printResult(float avg)
{
    cout << "\nAverage of numbers is: " << avg << endl;
}

int main()
{
    int num1,num2,num3;
    readThreeNumbers(num1, num2, num3);
    printResult(averageThreeNumbers(num1, num2, num3));
    return 0;
}
