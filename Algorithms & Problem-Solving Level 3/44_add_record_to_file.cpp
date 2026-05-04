#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
#include <vector>
#include <fstream>
using namespace std;

const string clientFileName = "Build/client.txt";

struct stClient
{
    string id;
    string pinCode;
    string name;
    string phone;
    double balance;
};

string readString(const string &message = " ")
{
    string s;
    cout << message;
    getline(cin >> ws, s);
    return s;
}

double readPositiveDouble(const string &message = " ")
{
    double number = 0;
    cout << message;
    cin >> number;

    while (cin.fail() || number < 0)
    {
        if (number < 0)
            cout << "Please Enter a positive number: ";
        else
            cout << "Invalid input, please enter a valid number: ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> number;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return number;
}

stClient readUpdatedClient(const string &message = " ")
{
    stClient client;
    cout << message;

    client.id = readString("\nEnter an id :");
    client.pinCode = readString("Enter pin code: ");
    client.name = readString("Enter a name: ");
    client.phone = readString("Enter a phone number: ");
    client.balance = readPositiveDouble("Enter balance: ");
    return client;
}

string clientToLine(const stClient &client, const string &separator = "#//#")
{
    string clientRecord;

    clientRecord = client.id + separator;
    clientRecord += client.pinCode + separator;
    clientRecord += client.name + separator;
    clientRecord += client.phone + separator;
    clientRecord += to_string(client.balance);

    return clientRecord;
}

void addLineToFile(string fileName, string line)
{
    ofstream file(fileName, ios::app);
    if (file.is_open())
    {
        file << line << endl;
        file.close();
    }
    else
    {
        cout << "file is not found\n";
    }
}

int main()
{
    addLineToFile(clientFileName,clientToLine(readUpdatedClient("add new client\n")));
    return 0;
}
