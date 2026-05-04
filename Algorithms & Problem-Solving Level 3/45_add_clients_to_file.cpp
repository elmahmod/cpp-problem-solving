#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
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

string readString(const string &message = "")
{
    string s;
    cout << message;
    getline(cin >> ws, s);
    return s;
}

double readPositiveDouble(const string &message = "")
{
    double number;
    cout << message;
    cin >> number;

    while (cin.fail() || number < 0)
    {
        if (number < 0)
            cout << "Please enter a positive number: ";
        else
            cout << "Invalid input, please enter a valid number: ";

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> number;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return number;
}

stClient readUpdatedClient(const string &message = "")
{
    stClient client;
    cout << message;

    client.id = readString("\nEnter an id: ");
    client.pinCode = readString("Enter pin code: ");
    client.name = readString("Enter a name: ");
    client.phone = readString("Enter a phone number: ");
    client.balance = readPositiveDouble("Enter balance: ");

    return client;
}

string clientToLine(const stClient &client, const string &separator = "#//#")
{
    string line;

    line = client.id + separator;
    line += client.pinCode + separator;
    line += client.name + separator;
    line += client.phone + separator;
    line += to_string(client.balance);

    return line;
}

void addLineToFile(const string &fileName, const string &line)
{
    ofstream file(fileName, ios::app);

    if (file.is_open())
    {
        file << line << endl;
        file.close();
    }
    else
    {
        cout << "File is not found\n";
    }
}

bool confirmAction(const string &message)
{
    char answer;

    do
    {
        cout << message;
        answer = cin.get();
        answer = tolower(answer);

        if (answer != '\n')
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (answer != 'y' && answer != 'n' && answer != '\n');

    return answer == 'y' || answer == '\n';
}

void addNewClient()
{
    stClient client = readUpdatedClient();
    addLineToFile(clientFileName, clientToLine(client));
}

void AddClients()
{
    cout << "\n\t\t--Add Clients--\n";
    do
    {
        addNewClient();
    } while (confirmAction("\ndo you want to add more? (y/n): "));
}

int main()
{
    AddClients();
    return 0;
}
