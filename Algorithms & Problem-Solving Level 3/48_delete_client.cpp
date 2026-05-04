#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

const string clientFileName = "Build/client.txt";

struct stClient
{
    string id;
    string pinCode;
    string name;
    string phone;
    bool markedForDeletion = false;
    double balance;
};

string readString(const string &message = " ")
{
    string s;
    cout << message;
    getline(cin >> ws, s);
    return s;
}

vector<string> split(string line, const string &separator)
{
    size_t pos;
    vector<string> vTokens;
    string token;

    while ((pos = line.find(separator)) != string::npos)
    {
        token = line.substr(0, pos);
        if (!token.empty())
            vTokens.push_back(token);
        line.erase(0, pos + separator.length());
    }

    if (!line.empty())
        vTokens.push_back(line);
    return vTokens;
}

stClient lineToClient(const string &line, const string &separator = "#//#")
{
    vector<string> vTokens = split(line, separator);
    stClient client;

    if (vTokens.size() < 5)
        return {};

    client.id = vTokens[0];
    client.pinCode = vTokens[1];
    client.name = vTokens[2];
    client.phone = vTokens[3];
    client.balance = stod(vTokens[4]);
    client.markedForDeletion = false;

    return client;
}

vector<stClient> loadClientsFromFile()
{
    ifstream file(clientFileName);
    vector<stClient> vClients;

    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            vClients.push_back(lineToClient(line));
        }
        file.close();
    }
    else
    {
        cout << "File not found\n";
    }

    return vClients;
}

int findClientIndex(const vector<stClient> &vClients, const string &id)
{
    for (int i = 0; i < vClients.size(); i++)
    {
        if (vClients[i].id == id)
            return i;
    }
    return -1;
}

void printClientData(const stClient &client)
{
    cout << left << setw(10) << "id" << ": " << client.id << endl;
    cout << left << setw(10) << "pin code" << ": " << client.pinCode << endl;
    cout << left << setw(10) << "name" << ": " << client.name << endl;
    cout << left << setw(10) << "phone" << ": " << client.phone << endl;
    cout << left << setw(10) << "balance" << ": " << client.balance << endl;
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

void saveChangesToFile(const vector<stClient> &vClients)
{
    ofstream file(clientFileName);

    if (file.is_open())
    {
        for (stClient client : vClients)
        {
            if (!client.markedForDeletion)
                file << clientToLine(client) << endl;
        }
        file.close();
    }
    else
    {
        cout << "file not found\n";
    }
}

void updateClient(vector<stClient> &vClients, const string &id)
{
    int index = findClientIndex(vClients, id);

    if (index == -1)
    {
        cout << "Client not found\n";
        return;
    }

    cout << "\n\tClient Data\n";
    printClientData(vClients[index]);

    if (confirmAction("Are you sure you want to delete this client? (y/n): "))
    {
        vClients[index].markedForDeletion = true;
        saveChangesToFile(vClients);
    }
    else
    {
        cout << "deletion has canceled\n";
    }
}

void displayUpdateClient()
{
    vector<stClient> vClients = loadClientsFromFile();
    string id = readString("Enter id: ");
    updateClient(vClients, id);
}

int main()
{
    displayUpdateClient();
    return 0;
}
