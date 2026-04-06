#include <iostream>
#include <vector>
using namespace std;

struct stStudent
{
    string firstName;
    string lastName;
    int age;
};

bool confirm(const string &message)
{
    char answer = 0;

    do
    {
        cout << message;
        answer = cin.get();
        answer = tolower(answer);

        if (answer != '\n')
            cin.ignore(1000, '\n');

    } while (answer != 'y' && answer != 'n' && answer != '\n');

    return answer == 'y' || answer == '\n';
}

int readPositiveInt(const string &message)
{
    int number = 0;
    cout << message;
    cin >> number;

    while (cin.fail() || number < 1)
    {
        cout << "invalid input, try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
        cin >> number;
    }

    cin.ignore(1000, '\n');
    return number;
}

string readString(const string &message)
{
    string text;
    cout << message;
    getline(cin >> ws, text);
    return text;
}

stStudent readStudent()
{
    stStudent student;
    student.firstName = readString("Enter first name : ");
    student.lastName = readString("Enter last name  : ");
    student.age = readPositiveInt("Enter age        : ");

    return student;
}

void fillVector(vector<stStudent> &vStudents)
{
    do
    {
        stStudent student = readStudent();
        vStudents.push_back(student);

    } while (confirm("\nadd more? (y/n): "));
}

void printVector(const vector<stStudent> &vStudents, const string &message = "")
{
    cout << message;
    for (const stStudent &student : vStudents)
    {
        cout << "First Name : " << student.firstName << endl;
        cout << "Last Name  : " << student.lastName << endl;
        cout << "Age        : " << student.age << endl;
        cout << endl;
    }
}

int main()
{
    vector<stStudent> vStudents;

    fillVector(vStudents);
    printVector(vStudents, "\nStudents vector\n\n");

    return 0;
}
