#include <iostream>
using namespace std;

int readNumber()
{
    int number;
    cin >> number;
    while (cin.fail())
    {
        cout << "Invalid input, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }
    
    cin.ignore(1000, '\n'); // new
    return number;
}

void readArray(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter number [" << i + 1 << "]: ";
        nums[i] = readNumber();
    }
}

int sumArray(const int nums[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += nums[i];
    }
    return sum;
}

float averageArray(const int nums[], int size)
{
    return (float)sumArray(nums, size) / size;
}

void printResult(float avg)
{
    cout << "\nAverage of numbers is: " << avg << endl;
}

int main()
{
    int nums[3], size = 3;
    readArray(nums, size);
    printResult(averageArray(nums, size));
    return 0;
}
