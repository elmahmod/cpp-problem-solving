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

void displayClientRecord(const stClient &client)
{
    cout << left << "| " << setw(20) << client.id;
    cout << left << "| " << setw(20) << client.pinCode;
    cout << left << "| " << setw(25) << client.name;
    cout << left << "| " << setw(20) << client.phone;
    cout << left << "| " << setw(20) << client.balance;
    cout << '\n';
}

void displayClientsHeader(const int &clientsNumber)
{
    cout << "\n\t\t\t\t\tClients List Of (" << clientsNumber << ")\n";
    cout << string(110, '-') << '\n';

    cout << left << "| " << setw(20) << "Account Id";
    cout << left << "| " << setw(20) << "Pin Code";
    cout << left << "| " << setw(25) << "Client Name";
    cout << left << "| " << setw(20) << "Phone";
    cout << left << "| " << setw(20) << "Balance";
    cout << '\n';
    cout << string(110, '-') << '\n';
}

void displayAllClients()
{
    vector<stClient> vClients = loadClientsFromFile(clientFileName);

    displayClientsHeader(vClients.size());

    for (const stClient &client : vClients)
    {
        displayClientRecord(client);
    }
    cout << string(110, '-') << '\n';
}

int main()
{
    displayAllClients();
    return 0;
}
