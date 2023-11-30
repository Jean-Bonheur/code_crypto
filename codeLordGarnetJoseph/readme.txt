# Description
Ce code est une implémentation du chiffrement de substitution simple en C++, parfois appelé chiffrement de Wolseley. 
Les bibliothèques <iostream>, <string> et <algorithm> sont incluses pour utiliser les fonctions d'entrée/sortie, les chaînes de caractères et les algorithmes, respectivement.

La fonction wolseleyCipher prend un message et une clé en entrée. Elle transforme le message et la clé en majuscules. Ensuite, elle crée un alphabet de chiffrement en ajoutant tous les caractères qui ne sont pas déjà dans la clé à la fin de celle-ci. Elle crée également un alphabet inversé en inversant l'ordre des caractères de l'alphabet de chiffrement et en omettant la lettre W. Enfin, elle parcourt chaque caractère du message, trouve son index dans l'alphabet de chiffrement et ajoute le caractère à l'index correspondant de l'alphabet inversé au texte chiffré.

La fonction main demande à l'utilisateur d'entrer un message et une clé. Elle appelle ensuite la fonction wolseleyCipher avec le message et la clé en entrée et affiche le texte chiffré.



## Utilisation

Lorsque vous exécutez le programme, il vous demandera d'entrer le message à chiffrer et la clé.

Par exemple, si vous entrez le message "HELLO" avec la clé "PARDON", le programme renverra le message chiffré "JMFFU".
