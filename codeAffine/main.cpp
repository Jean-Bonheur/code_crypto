#include<iostream>
#include<algorithm>
using namespace std;

// Fonction pour le chiffrement affine
string encryptAffine(string msg, int a, int b)
{
    string cipher = "";
    for (int i = 0; i < msg.length(); i++)
    {
        if(msg[i]!=' ')
            cipher = cipher + (char) ((((a * (msg[i]-'A') ) + b) % 26) + 'A');
        else
            cipher += msg[i];
    }
    return cipher;
}

int main(void)
{
    string msg;
    int a, b;
    cout << "Entrez le message à crypter: ";
    getline(cin, msg);
    transform(msg.begin(), msg.end(), msg.begin(), ::toupper);
    cout << "Entrez la valeur de a: ";
    cin >> a;
    cout << "Entrez la valeur de b: ";
    cin >> b;
    string cipherText = encryptAffine(msg, a, b);
    cout << "Texte chiffré: " << cipherText<<endl;
    return 0;
}
