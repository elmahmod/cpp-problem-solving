#include <iostream>
using namespace std;

string readString(const string &message = "")
{
    string text;
    cout << message;
    getline(cin >> ws, text);
    return text;
}

string encryption(const string &originalText, int key)
{
    string encryptedText = originalText;
    for (char &c : encryptedText) // we used range-based in this time not index-based
    {
        c += key;
    }
    return encryptedText;
}

string decryption(const string &encryptedText, int key)
{
    string decryptedText = encryptedText;
    for (char &c : decryptedText) // we used range-based in this time not index-based
    {
        c -= key;
    }
    return decryptedText;
}

int main()
{
    const int encryptionKey = 2;
    string text = readString("Enter your name: ");

    cout << "Text Before Encryption: " << text << endl;

    string encryptedText = encryption(text, encryptionKey);
    cout << "Text After Encryption: " << encryptedText << endl;

    string decryptedText = decryption(encryptedText, encryptionKey);
    cout << "Text After Decryption: " << decryptedText << endl;

    return 0;
}
