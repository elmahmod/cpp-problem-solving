#include <iostream>
using namespace std;

struct stStudent
{
    string name;
    int age;
};

int main()
{
    stStudent student;
    
    student.name = "ibrahim";
    student.age = 12;
    
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    
    stStudent *ptr = &student;
    ptr->name = "Muhammed";
    ptr->age = 15;

    cout << "Name: " << ptr->name << endl;
    cout << "Age: " << ptr->age << endl;

    return 0;
}
