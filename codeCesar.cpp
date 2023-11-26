#include <iostream>
#include <string>

using namespace std;

string cesar_encrypt(const string &message, int cle) {
    string ciphertext;

    for (char lettre: message) {
        if (lettre >= 'a' && lettre <= 'z') {
            int index = lettre - 'a';
            int new_index = (index + cle) % 26;
            char new_lettre = 'a' + new_index;
            ciphertext += new_lettre;
        } else if (lettre >= 'A' && lettre <= 'Z') {
            int index = lettre - 'A';
            int new_index = (index + cle) % 26;
            char new_lettre = 'A' + new_index;
            ciphertext += new_lettre;
        } else {
            ciphertext += lettre;
        }
    }

    return ciphertext;
}

int main() {
    string message;
    int cle;

    cout << "Veuillez entrer le message à chiffrer : ";
    getline(cin, message);

    cout << "Veuillez entrer la clé de César : ";
    cin >> cle;

    string ciphertext = cesar_encrypt(message, cle);

    cout << "Le message chiffré est : " << ciphertext << endl;

    return 0;
}

