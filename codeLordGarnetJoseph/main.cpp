#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

string wolseleyCipher(string msg, string key) {
    transform(msg.begin(), msg.end(), msg.begin(), ::toupper);
    transform(key.begin(), key.end(), key.begin(), ::toupper);

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    alphabet.erase(remove(alphabet.begin(), alphabet.end(), 'W'), alphabet.end()); // Supprimer 'W' de l'alphabet

    string cipherAlphabet = key;
    for (char c : alphabet) {
        if (cipherAlphabet.find(c) == string::npos) {
            cipherAlphabet += c;
        }
    }
    string reversedAlphabet = string(cipherAlphabet.rbegin(), cipherAlphabet.rend());
    string cipherText = "";
    for (char c : msg) {
        if (c >= 'A' && c <= 'Z') {
            int index = cipherAlphabet.find(c);
            cipherText += reversedAlphabet[index];
        } else {
            cipherText += c;
        }
    }
    return cipherText;
}

int main() {
    string msg;
    string key;
    cout << "Entrez le message à chiffrer: ";
    getline(cin, msg);
    cout << "Entrez la clé: ";
    cin >> key;
    string cipherText = wolseleyCipher(msg, key);
    cout << "Texte chiffré: " << cipherText << endl;
    return 0;
}
