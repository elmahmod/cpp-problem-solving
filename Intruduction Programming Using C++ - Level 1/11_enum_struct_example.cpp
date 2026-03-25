#include <iostream>
using namespace std;

enum eGender { male, female };
enum eStatus { married, single };

struct sAddress
{
    string poBox; 
    string zipCode;
    string streetName;
    string buildingNo;
};

struct sContactInfo
{
    string phone;
    string email;
    sAddress address; 
};

// Main person struct
struct sPerson
{
    string firstName;
    string lastName;
    int age;
    eStatus status;
    eGender gender;
    sContactInfo contactInfo;
};

int main()
{
    sPerson person;

    // =========================
    // Assign values
    // =========================
    person.firstName = "Muhammed";
    person.lastName = "El-Mahmud";
    person.age = 21;

    person.gender = male;
    person.status = single;

    person.contactInfo.email = "asd@gmail.com";
    person.contactInfo.phone = "515161";

    person.contactInfo.address.poBox = "7775";
    person.contactInfo.address.zipCode = "13500";
    person.contactInfo.address.streetName = "Osmanli Street";
    person.contactInfo.address.buildingNo = "305";

    // =========================
    // Print data
    // =========================
    cout << "===== Person Info =====\n";

    cout << "First name: " << person.firstName << endl;
    cout << "Last name: " << person.lastName << endl;
    cout << "Age: " << person.age << endl;

    cout << "Gender: " << person.gender << endl; // 0 = male
    cout << "Status: " << person.status << endl; // 1 = single

    cout << "\n--- Contact Info ---\n";
    cout << "Email: " << person.contactInfo.email << endl;
    cout << "Phone: " << person.contactInfo.phone << endl;

    cout << "\n--- Address ---\n";
    cout << "PO Box: " << person.contactInfo.address.poBox << endl;
    cout << "Zip Code: " << person.contactInfo.address.zipCode << endl;
    cout << "Street: " << person.contactInfo.address.streetName << endl;
    cout << "Building No: " << person.contactInfo.address.buildingNo << endl;

    cin.get();
    return 0;
}
