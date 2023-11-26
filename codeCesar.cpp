#include <iostream>
#include <string>

using namespace std;

string cesar(const string &message, int cle) {
    string texte_crypte;

    for (char lettre: message) {
        if (lettre >= 'a' && lettre <= 'z') {
            int index = lettre - 'a';
            int new_index = (index + cle) % 26;
            char new_lettre = 'a' + new_index;
            texte_crypte += new_lettre;
        } else if (lettre >= 'A' && lettre <= 'Z') {
            int index = lettre - 'A';
            int new_index = (index + cle) % 26;
            char new_lettre = 'A' + new_index;
            texte_crypte += new_lettre;
        } else {
            texte_crypte += lettre;
        }
    }

    return texte_crypte;
}

int main() {
    string message;
    int cle;

    cout << "Veuillez entrer le message à chiffrer : ";
    getline(cin, message);

    cout << "Veuillez entrer la clé de César : ";
    cin >> cle;

    string texte_crypte = cesar(message, cle);

    cout << "Le message crypté est : " << texte_crypte << endl;

    return 0;
}

