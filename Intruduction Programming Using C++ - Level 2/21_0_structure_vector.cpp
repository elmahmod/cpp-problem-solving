#include <iostream>
#include <vector>
using namespace std;

struct stStudent
{
    string firstName;
    string lastName;
    int age;
};

int main()
{
    vector<stStudent> vStudents;

    stStudent student;

    student.firstName = "muhamed";
    student.lastName = "el-mahmud";
    student.age = 20;
    vStudents.push_back(student);

    student.firstName = "muhamed";
    student.lastName = "el-mahmud";
    student.age = 20;
    vStudents.push_back(student);

    student.firstName = "muhamed";
    student.lastName = "el-mahmud";
    student.age = 20;
    vStudents.push_back(student);

    for (stStudent &student : vStudents)
    {
        cout << "first name : " << student.firstName << endl;
        cout << "last name  : " << student.lastName << endl;
        cout << "age        : " << student.age << endl;
        cout << endl;
    }
    return 0;
}
