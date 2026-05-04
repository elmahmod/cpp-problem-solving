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

    return client;
}

vector<stClient> loadClientsFromFile(const string &fileName)
{
    ifstream file(fileName);
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

void printClientData(stClient client)
{
    cout << left << setw(10) << "id" << ": " << client.id << endl;
    cout << left << setw(10) << "pin code" << ": " << client.pinCode << endl;
    cout << left << setw(10) << "name" << ": " << client.name << endl;
    cout << left << setw(10) << "phone" << ": " << client.phone << endl;
    cout << left << setw(10) << "balance" << ": " << client.balance << endl;
}

void displayFindClient()
{
    vector<stClient> vClients = loadClientsFromFile(clientFileName);

    string id = readString("Enter id: ");
    int index = findClientIndex(vClients, id);

    if (index == -1)
    {
        cout << "Client not found\n";
        return;
    }
    cout << "\n\tClient Data\n";
    printClientData(vClients[index]);
}

int main()
{
    displayFindClient();
    return 0;
}
