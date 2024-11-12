#include <stdio.h>

void sous_chaine(const char *source, char *dest, int debut, int longueur) {
    int i;

    // Copier les caractères de la position de départ spécifiée dans dest
    for (i = 0; i < longueur && source[debut + i] != '\0'; i++) {
        dest[i] = source[debut + i]; // Copier chaque caractère dans dest
    }

    dest[i] = '\0'; // Ajouter le caractère nul à la fin de dest pour terminer la chaîne
}

int main() {
    const char *texte = "Extraction de sous-chaîne"; // Chaîne source
    char resultat[20]; // Stocker la sous-chaîne extraite
    sous_chaine(texte, resultat, 11, 10); // Extraire 10 caractères à partir de l'index 11
    printf("Sous-chaîne : %s\n", resultat); // Afficher le résultat
    return 0;
}