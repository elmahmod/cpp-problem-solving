#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;

struct stClient
{
    string id;
    string pinCode;
    string name;
    string phone;
    double balance;
};

vector<string> split(string line, const string& delimiter = " ")
{
    vector<string> vTokens;
    string token;
    size_t pos;

    while ((pos = line.find(delimiter)) != string::npos)
    {
        token = line.substr(0, pos);
        if (!token.empty())
            vTokens.push_back(token);
        line.erase(0, pos + delimiter.length());
    }

    if (!line.empty())
        vTokens.push_back(line);

    return vTokens;
}

stClient convertLineToRecord(const string& line, const string& separator = "#//#")
{
    stClient client;
    vector<string> vTokens = split(line, separator);
    
    client.id = vTokens[0];
    client.pinCode = vTokens[1];
    client.name = vTokens[2];
    client.phone = vTokens[3];
    client.balance = stod(vTokens[4]);
    return client;
}

void printClientRecord(const stClient& client)
{
    cout << left << setw(10) << "ID"       << ": " << client.id << endl;
    cout << left << setw(10) << "PIN Code" << ": " << client.pinCode << endl;
    cout << left << setw(10) << "Name"     << ": " << client.name << endl;
    cout << left << setw(10) << "Phone"    << ": " << client.phone << endl;
    cout << left << setw(10) << "Balance"  << ": " << client.balance << endl;
}

int main()
{
    stClient client = convertLineToRecord("150#//#1234#//#muhamed#//#059305#//#99999");
    printClientRecord(client);
    return 0;
}
