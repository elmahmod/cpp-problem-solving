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

bool isNumberInRange(int number, int from, int to)
{
    return (number >= from && number <= to);
}

int readNumberInRange(int from, int to)
{
    int number = 0;
    number = readNumber("Enter number between " + to_string(from) + " and " + to_string(to) + ": ");

    while (!isNumberInRange(number, from, to))
    {
        number = readNumber("must be between " + to_string(from) + "-" + to_string(to) + ": ");
    }
    return number;
}

char getLetterGrade(int grade)
{
    if (grade >= 90)
        return 'A';
    else if (grade >= 80)
        return 'B';
    else if (grade >= 70)
        return 'C';
    else if (grade >= 60)
        return 'D';
    else if (grade >= 50)
        return 'E';
    else
        return 'F';
}

void printMark(int grade)
{
    cout << "\nGrade " << grade << " is represented as: " << getLetterGrade(grade) << endl;
}

int main()
{
    int grade = readNumberInRange(0, 100);
    printMark(grade);
    return 0;
}
