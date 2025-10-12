#include <stdio.h>

// --------------------------------------------------
// Fonction : menu()
// Rôle : Affiche le menu des boissons et renvoie le prix choisi
// --------------------------------------------------
int menu()
{
    printf("=== distributeur automatique ===");
    printf("\n\n\tLes prix sont les suivants :");
    printf("\n1 − thé : 60 centimes");
    printf("\n2 − café : 40 centimes");
    printf("\n3 − chocolat chaud : 70 centimes");

    printf("\n\nSaisissez votre choix ---> ");
    int choix;
    scanf("%d", &choix);

    switch (choix)
    {
    case 1:
        printf("Thé sélectionné");
        return 60;
    case 2:
        printf("Café sélectionné");
        return 40;
    case 3:
        printf("Chocolat chaud sélectionné");
        return 70;
    default:
        printf("Choix invalide !");
        return 0;
    }
}

// --------------------------------------------------
// Fonction : rendre_monaie()
// --------------------------------------------------
void rendre_monaie(int monaie)
{
    int nbP; // nombre de pièces pour chaque type

    printf("\nMonnaies rendues :");

    // On commence par les plus grosses pièces, puis on descend

    // Pièces de 2 euros (200 centimes)
    nbP = 0;
    while (monaie >= 200)
    {
        monaie = monaie - 200;
        nbP++;
    }
    if (nbP > 0)
        printf("\n%d pièce(s) de 200 centimes", nbP);

    // Pièces de 1 euro (100 centimes)
    nbP = 0;
    while (monaie >= 100)
    {
        monaie = monaie - 100;
        nbP++;
    }
    if (nbP > 0)
        printf("\n%d pièce(s) de 100 centimes", nbP);

    // Pièces de 50 centimes
    nbP = 0;
    while (monaie >= 50)
    {
        monaie = monaie - 50;
        nbP++;
    }
    if (nbP > 0)
        printf("\n%d pièce(s) de 50 centimes", nbP);

    // Pièces de 20 centimes
    nbP = 0;
    while (monaie >= 20)
    {
        monaie = monaie - 20;
        nbP++;
    }
    if (nbP > 0)
        printf("\n%d pièce(s) de 20 centimes", nbP);

    // Pièces de 10 centimes
    nbP = 0;
    while (monaie >= 10)
    {
        monaie = monaie - 10;
        nbP++;
    }
    if (nbP > 0)
        printf("\n%d pièce(s) de 10 centimes", nbP);

    // Pièces de 5 centimes
    nbP = 0;
    while (monaie >= 5)
    {
        monaie = monaie - 5;
        nbP++;
    }
    if (nbP > 0)
        printf("\n%d pièce(s) de 5 centimes", nbP);
}

// --------------------------------------------------
// Fonction principale : main()
// --------------------------------------------------
int main()
{
    int boisson = menu(); // récupère le prix de la boisson
    int pieces;           // montant inséré par l’utilisateur

    if (boisson == 0)
        return 0; // on arrête si le choix est invalide

    printf("\n\nInsérez des pièces (en centimes) ---> ");
    scanf("%d", &pieces);

    // Tant que le montant est insuffisant
    while (pieces < boisson)
    {
        printf("\n!! Montant trop petit !!");
        printf("\nInsérez des pièces ---> ");
        scanf("%d", &pieces);
    }

    // Si l’utilisateur met plus que le prix, on rend la différence
    if (pieces > boisson)
    {
        rendre_monaie(pieces - boisson);
    }
    else
    {
        printf("\nAucune monnaie à rendre !");
    }

    return 0;
}
