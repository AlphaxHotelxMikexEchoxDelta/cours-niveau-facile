#include <stdio.h>

// --------------------------------------------------
// Fonction : menu()
// Rôle : Affiche le menu des boissons et renvoie le prix choisi
// --------------------------------------------------
int menu()
{
    // On affiche le menu à l'utilisateur
    printf("=== distributeur automatique ===");
    printf("\n\n\tLes prix sont les suivants :");
    printf("\n1 − thé : 60 centimes");
    printf("\n2 − café : 40 centimes");
    printf("\n3 − chocolat chaud : 70 centimes");

    // On demande à l'utilisateur son choix
    printf("\n\nSaisissez votre choix ---> ");
    int choix;
    scanf("%d", &choix);   // On lit le nombre saisi au clavier

    // Selon le choix, on affiche un message et on renvoie le prix
    switch (choix)
    {
    case 1:
        printf("Thé sélectionné");
        return 60;   // prix en centimes
    case 2:
        printf("Café sélectionné");
        return 40;
    case 3:
        printf("Chocolat chaud sélectionné");
        return 70;
    default:
        // Si le choix ne correspond à rien
        printf("Choix invalide !");
        break;
    }

    return 0;   // Si rien n’a été choisi correctement
}

// --------------------------------------------------
// Fonction : rendre_monaie()
// Rôle : Donner la monnaie à rendre en pièces
// --------------------------------------------------
void rendre_monaie(int monaie)
{
    // ⚠️ Ici il y a un tableau (liste) utilisé pour simplifier :
    // liste[i] représente la valeur d’une pièce possible.
    // Exemple : 200 centimes = 2 euros, 100 = 1 euro, etc.
    // ne prend pas en coompte ceci !!
    int liste[] = {200, 100, 50, 20, 10, 5};

    int nbP; // Compte combien de pièces de chaque type on rend

    printf("\nMonnaies rendues :");

    // Cette boucle parcourt chaque type de pièce (de la plus grande à la plus petite)
    for (int i = 0; i < 6; i++)
    {
        nbP = 0; // on remet le compteur à zéro à chaque type de pièce

        // Tant qu’il reste assez de monnaie pour une pièce de ce type
        while (monaie >= liste[i])
        {
            monaie -= liste[i];  // on enlève la valeur de cette pièce
            nbP++;                // on compte une pièce de plus
        }

        // Si on a utilisé au moins une pièce de ce type, on affiche le résultat
        if (nbP != 0)
        {
            printf("\n%d pièce(s) de %d centimes", nbP, liste[i]);
        }
    }
}

// --------------------------------------------------
// Fonction principale : main()
// C’est par ici que le programme commence à s’exécuter
// --------------------------------------------------
int main()
{
    int boisson = menu();   // On appelle la fonction menu() pour obtenir le prix
    int rendu, pieces;

    // On demande à l’utilisateur d’insérer des pièces
    printf("\n\nInsérez des pièces (en centimes) ---> ");
    scanf("%d", &pieces);

    // Tant que le montant inséré est trop petit, on redemande
    while (pieces < boisson)
    {
        printf("\n!! Montant trop petit !!");
        printf("\nInsérez des pièces ---> ");
        scanf("%d", &pieces);
    }

    // Si le montant est supérieur au prix, on rend la monnaie
    if (pieces > boisson)
    {
        rendre_monaie(pieces - boisson);
    }
    else
    {
        // Sinon, s’il est égal, rien à rendre
        printf("\nAucune monnaie à rendre !");
    }

    return 0;   // Fin du programme
}
