# 🧠 Exercices Débutant en C

## 🧩 Exercice 1
Afficher les nombres de 1 à 10.  
Si le nombre est pair → “pair”, sinon “impair”.  

Fonction à définir :
```c
void afficherPairOuImpair(int n);
````

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void afficherPairOuImpair(int n) {
    if (n % 2 == 0) {
        printf("%d est pair\n", n);
    } else {
        printf("%d est impair\n", n);
    }
}

int main() {
    for (int i = 1; i <= 10; i++) {
        afficherPairOuImpair(i);
    }
    return 0;
}
```

🧠 **Explication**

* La boucle `for` compte de 1 à 10.
* Le `%` donne le reste d’une division : si `n % 2 == 0`, le nombre est pair.
* On appelle la fonction `afficherPairOuImpair()` à chaque tour.

</details>

---

## 🧩 Exercice 2

Demander un nombre.
Tant qu’il est < 10, redemander.
Quand il est ≥ 10 → afficher “Bravo !”.

Fonction à définir :

```c
int demanderNombre();
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

int demanderNombre() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    return n;
}

int main() {
    int nombre = demanderNombre();

    while (nombre < 10) {
        printf("Trop petit ! Essayez encore.\n");
        nombre = demanderNombre();
    }

    printf("Bravo !\n");
    return 0;
}
```

🧠 **Explication**

* `scanf("%d", &n)` lit un entier entré au clavier.
* `while (nombre < 10)` répète tant que le nombre est trop petit.

</details>

---

## 🧩 Exercice 3

Faire un mini menu :
1 = dire bonjour
2 = dire au revoir
0 = quitter

Le menu doit s’afficher **au moins une fois**, puis se répéter tant que l’utilisateur ne tape pas 0.

Fonction à définir :

```c
void afficherMenu();
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void afficherMenu() {
    printf("\n=== MENU ===\n");
    printf("1 - Dire bonjour\n");
    printf("2 - Dire au revoir\n");
    printf("0 - Quitter\n");
}

int main() {
    int choix;

    do {
        afficherMenu();
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Bonjour !\n");
                break;
            case 2:
                printf("Au revoir !\n");
                break;
            case 0:
                printf("Fin du programme.\n");
                break;
            default:
                printf("Choix invalide !\n");
        }
    } while (choix != 0);

    return 0;
}
```

🧠 **Explication**

* `do...while` : la boucle s’exécute au moins une fois.
* `switch` : sélectionne une action selon la valeur de `choix`.
* `break` : empêche d’exécuter les autres cas après celui choisi.

</details>

---

## 🧩 Exercice 4

Afficher les jours de la semaine (1 = lundi, 7 = dimanche).
Utiliser un `for` + `switch`.

Fonction à définir :

```c
void afficherJour(int numero);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void afficherJour(int numero) {
    switch (numero) {
        case 1: printf("Lundi\n"); break;
        case 2: printf("Mardi\n"); break;
        case 3: printf("Mercredi\n"); break;
        case 4: printf("Jeudi\n"); break;
        case 5: printf("Vendredi\n"); break;
        case 6: printf("Samedi\n"); break;
        case 7: printf("Dimanche\n"); break;
        default: printf("Jour inconnu\n");
    }
}

int main() {
    for (int i = 1; i <= 7; i++) {
        afficherJour(i);
    }
    return 0;
}
```

🧠 **Explication**

* `for` : compte de 1 à 7.
* `switch` : affiche le jour correspondant.

</details>

---

## 🧩 Exercice 5

Demander un mot de passe.
Tant que l’utilisateur ne tape pas `"1234"`, redemander.
Quand c’est bon → “Accès autorisé”.

Fonction à définir :

```c
int verifierMotDePasse(char *saisie);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>
#include <string.h>

int verifierMotDePasse(char *saisie) {
    if (strcmp(saisie, "1234") == 0)
        return 1;
    else
        return 0;
}

int main() {
    char motdepasse[20];

    printf("Entrez le mot de passe : ");
    scanf("%s", motdepasse);

    while (!verifierMotDePasse(motdepasse)) {
        printf("Faux ! Essayez encore : ");
        scanf("%s", motdepasse);
    }

    printf("Accès autorisé !\n");
    return 0;
}
```

🧠 **Explication**

* `strcmp()` compare deux chaînes de caractères.
* Retourne 0 si elles sont identiques.
* `!verifierMotDePasse()` → “tant que ce n’est pas le bon mot de passe”.

</details>

---

## 🧩 Exercice 6

Demander un nombre.
Afficher :

* “négatif” si < 0
* “positif” si > 0
* “zéro” si 0
  Redemander jusqu’à ce que l’utilisateur tape `999`.

Fonction à définir :

```c
void analyserNombre(int n);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void analyserNombre(int n) {
    if (n == 0)
        printf("Zéro\n");
    else if (n > 0)
        printf("Positif\n");
    else
        printf("Négatif\n");
}

int main() {
    int nombre;

    do {
        printf("Entrez un nombre (999 pour quitter) : ");
        scanf("%d", &nombre);

        if (nombre != 999)
            analyserNombre(nombre);

    } while (nombre != 999);

    printf("Fin du programme.\n");
    return 0;
}
```

🧠 **Explication**

* `do...while` : exécute au moins une fois.
* `if/else if/else` : teste trois cas.
* `999` : valeur spéciale pour sortir du programme.

</details>
```
