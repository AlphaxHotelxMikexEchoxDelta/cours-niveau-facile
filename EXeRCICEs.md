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

---

## 🧩 EXERCICE 7 — Table de multiplication (boucle dans une boucle)

### 💡 Enoncé

Afficher la table de multiplication de 1 à 5.
Chaque ligne doit montrer la table complète (ex : 3 × 1, 3 × 2, etc.).

**Fonction à définir :**

```c
void afficherTable(int n);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void afficherTable(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    for (int t = 1; t <= 5; t++) {
        printf("\n--- Table de %d ---\n", t);
        afficherTable(t);
    }
    return 0;
}
```

🧠 **Explication**

* Boucle extérieure → change de table (1 à 5).
* Boucle intérieure → compte jusqu’à 10.
* On appelle `afficherTable()` pour chaque table.

</details>

---

## 🧩 EXERCICE 8 — Somme des pairs entre deux nombres

### 💡 Enoncé

Demander deux nombres à l’utilisateur.
Afficher la **somme des nombres pairs** entre ces deux bornes incluses.

**Fonction à définir :**

```c
int sommePairs(int debut, int fin);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

int sommePairs(int debut, int fin) {
    int somme = 0;
    for (int i = debut; i <= fin; i++) {
        if (i % 2 == 0)
            somme += i;
    }
    return somme;
}

int main() {
    int a, b;
    printf("Entrez deux nombres : ");
    scanf("%d %d", &a, &b);
    printf("Somme des pairs = %d\n", sommePairs(a, b));
    return 0;
}
```

🧠 **Explication**

* Teste chaque nombre avec `i % 2 == 0`.
* Si pair, on ajoute à `somme`.
* On retourne la somme totale.

</details>

---

## 🧩 EXERCICE 9 — Compter les positifs et négatifs

### 💡 Enoncé

Demander 5 nombres à l’utilisateur.
Afficher combien sont **positifs**, combien sont **négatifs** et combien sont **zéro**.

**Fonction à définir :**

```c
void compterNombres();
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void compterNombres() {
    int positif = 0, negatif = 0, zero = 0, n;

    for (int i = 1; i <= 5; i++) {
        printf("Entrez un nombre : ");
        scanf("%d", &n);

        if (n > 0) positif++;
        else if (n < 0) negatif++;
        else zero++;
    }

    printf("Positifs: %d, Négatifs: %d, Zéro: %d\n", positif, negatif, zero);
}

int main() {
    compterNombres();
    return 0;
}
```

🧠 **Explication**

* Boucle `for` pour lire 5 nombres.
* Trois compteurs séparés pour chaque catégorie.

</details>

---

## 🧩 EXERCICE 10 — Compter combien d’essais avant d’avoir un bon nombre

### 💡 Enoncé

L’utilisateur doit deviner le nombre 7.
Le programme lui demande jusqu’à ce qu’il trouve,
et affiche combien d’essais il a faits.

**Fonction à définir :**

```c
int deviner();
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

int deviner() {
    int nombre, essais = 0;

    do {
        printf("Devinez le nombre : ");
        scanf("%d", &nombre);
        essais++;

        if (nombre < 7)
            printf("Trop petit !\n");
        else if (nombre > 7)
            printf("Trop grand !\n");
    } while (nombre != 7);

    return essais;
}

int main() {
    int tentatives = deviner();
    printf("Bravo ! Trouvé en %d essais.\n", tentatives);
    return 0;
}
```

🧠 **Explication**

* Boucle `do...while` → tourne au moins une fois.
* On compte le nombre d’essais avec `essais++`.
* Conditions imbriquées pour les indices.

</details>

---

## 🧩 EXERCICE 11 — Triangle d’étoiles

### 💡 Enoncé

Afficher un petit triangle d’étoiles :

```
*
**
***
****
*****
```

**Fonction à définir :**

```c
void afficherTriangle(int hauteur);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void afficherTriangle(int hauteur) {
    for (int i = 1; i <= hauteur; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    afficherTriangle(5);
    return 0;
}
```

🧠 **Explication**

* Boucle extérieure = lignes.
* Boucle intérieure = nombre d’étoiles sur chaque ligne.
* Imbrication classique “boucle dans boucle”.

</details>

---

## 🧩 EXERCICE 12 — Vérifier un intervalle avec OU

### 💡 Enoncé

Demander un nombre.
S’il est **en dehors** de l’intervalle [10, 20], afficher “hors intervalle”.
Sinon, “dans l’intervalle”.

**Fonction à définir :**

```c
void verifierIntervalle(int n);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void verifierIntervalle(int n) {
    if (n < 10 || n > 20)
        printf("Hors intervalle\n");
    else
        printf("Dans l’intervalle\n");
}

int main() {
    int x;
    printf("Entrez un nombre : ");
    scanf("%d", &x);
    verifierIntervalle(x);
    return 0;
}
```

🧠 **Explication**

* `||` = OU logique → vrai si une des conditions est vraie.
* Ici : si plus petit que 10 **ou** plus grand que 20.

</details>

---

## 🧩 EXERCICE 13 — Produit des impairs

### 💡 Enoncé

Calculer le **produit** des nombres impairs entre 1 et 9.

**Fonction à définir :**

```c
int produitImpairs();
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

int produitImpairs() {
    int produit = 1;
    for (int i = 1; i <= 9; i++) {
        if (i % 2 != 0)
            produit *= i;
    }
    return produit;
}

int main() {
    printf("Produit des impairs = %d\n", produitImpairs());
    return 0;
}
```

🧠 **Explication**

* `i % 2 != 0` → test des impairs.
* `produit *= i` multiplie à chaque tour.

</details>

---

## 🧩 EXERCICE 14 — Afficher les nombres premiers entre 1 et 20

### 💡 Enoncé

Afficher les nombres premiers (1 à 20).
Utiliser une **fonction** pour tester si un nombre est premier.

**Fonctions à définir :**

```c
int estPremier(int n);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

int estPremier(int n) {
    if (n < 2) return 0;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    for (int i = 1; i <= 20; i++) {
        if (estPremier(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
```

🧠 **Explication**

* On teste chaque `i` de 2 à n−1.
* Si `n % i == 0`, ce n’est pas premier.
* Sinon, on affiche le nombre.

</details>

---

## 🧩 EXERCICE 15 — Mot de passe avec 3 essais maximum

### 💡 Enoncé

L’utilisateur a **3 essais max** pour entrer le mot de passe `"abc123"`.
S’il échoue 3 fois → “Accès refusé”.

**Fonction à définir :**

```c
int verifierMotDePasse(char *saisie);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>
#include <string.h>

int verifierMotDePasse(char *saisie) {
    return strcmp(saisie, "abc123") == 0;
}

int main() {
    char mdp[20];
    int essais = 0;

    while (essais < 3) {
        printf("Mot de passe : ");
        scanf("%s", mdp);

        if (verifierMotDePasse(mdp)) {
            printf("Accès autorisé !\n");
            return 0;
        }

        essais++;
        printf("Faux ! (%d/3)\n", essais);
    }

    printf("Accès refusé.\n");
    return 0;
}
```

🧠 **Explication**

* `essais < 3` limite le nombre de tentatives.
* Si trouvé → `return 0;` quitte immédiatement.

</details>

---

## 🧩 EXERCICE 16 — Nombre mystère (random simplifié)

### 💡 Enoncé

Le programme “choisit” un nombre entre 1 et 5.
L’utilisateur doit le trouver.
(⚠️ pas de vraie aléatoire, juste un nombre fixé à 3.)

**Fonction à définir :**

```c
int verifier(int choix);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

int verifier(int choix) {
    int mystere = 3;
    if (choix == mystere)
        return 1;
    else
        return 0;
}

int main() {
    int x;
    do {
        printf("Devinez le nombre (1-5) : ");
        scanf("%d", &x);

        if (verifier(x))
            printf("Bravo !\n");
        else
            printf("Raté !\n");

    } while (!verifier(x));
    return 0;
}
```

🧠 **Explication**

* Boucle `do...while` pour répéter tant que la réponse est fausse.
* `verifier()` renvoie 1 si bon, 0 sinon.

</details>

---

## 🧩 EXERCICE 17 — Table de carrés

### 💡 Enoncé

Afficher les nombres de 1 à 10 avec leur carré.
(ex : 3 → 9)

**Fonction à définir :**

```c
int carre(int n);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

int carre(int n) {
    return n * n;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d^2 = %d\n", i, carre(i));
    }
    return 0;
}
```

🧠 **Explication**

* Simple boucle `for`.
* `carre()` multiplie le nombre par lui-même.

</details>

---

## 🧩 EXERCICE 18 — Boucle infinie avec sortie conditionnelle

### 💡 Enoncé

Faire une boucle infinie qui lit des nombres.
S’arrêter si l’utilisateur tape un **nombre négatif**.

**Fonction à définir :**

```c
void lireNombres();
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void lireNombres() {
    int n;
    while (1) { // boucle infinie
        printf("Entrez un nombre (négatif pour quitter) : ");
        scanf("%d", &n);
        if (n < 0)
            break;
        printf("Vous avez entré : %d\n", n);
    }
}

int main() {
    lireNombres();
    printf("Fin du programme.\n");
    return 0;
}
```

🧠 **Explication**

* `while(1)` → tourne sans fin.
* `break` → casse la boucle quand la condition est remplie.

</details>

---

## 🧩 EXERCICE 19 — Cube d’étoiles (3 boucles imbriquées)

### 💡 Enoncé

Afficher un **cube d’étoiles 3D** (5×5×5).
Chaque “couche” doit être séparée par une ligne vide.

**Fonction à définir :**

```c
void afficherCube(int taille);
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void afficherCube(int taille) {
    for (int z = 1; z <= taille; z++) {           // profondeur
        printf("\n--- Couche %d ---\n", z);
        for (int y = 1; y <= taille; y++) {       // lignes
            for (int x = 1; x <= taille; x++) {   // colonnes
                printf("* ");
            }
            printf("\n");
        }
    }
}

int main() {
    afficherCube(5);
    return 0;
}
```

🧠 **Explication**

* 3 boucles imbriquées = 3 dimensions :

  * `z` → couches,
  * `y` → lignes,
  * `x` → colonnes.
* À chaque “couche” (`z`), on dessine un carré d’étoiles (boucles `y` et `x`).

</details>

---

## 🧩 EXERCICE 20 — Table de multiplication complète (1 à 10)

### 💡 Enoncé

Afficher toutes les **tables de multiplication** de 1 à 10,
chacune allant de 1 à 10, et séparée par un saut de ligne.

**Fonction à définir :**

```c
void afficherToutesLesTables();
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void afficherToutesLesTables() {
    for (int a = 1; a <= 10; a++) {           // première valeur
        printf("\n=== Table de %d ===\n", a);
        for (int b = 1; b <= 10; b++) {       // deuxième valeur
            for (int rep = 1; rep <= 1; rep++) { // 3e boucle inutile mais illustrative
                printf("%d x %d = %d\n", a, b, a * b);
            }
        }
    }
}

int main() {
    afficherToutesLesTables();
    return 0;
}
```

🧠 **Explication**

* 1re boucle (`a`) → de 1 à 10 → la table actuelle.
* 2e boucle (`b`) → de 1 à 10 → les multiplications.
* 3e boucle (`rep`) → montre qu’on peut ajouter un 3e niveau (ici redondant, mais utile pour l’exercice).

</details>

---

## 🧩 EXERCICE 21 — Mini horloge (heures, minutes, secondes)

### 💡 Enoncé

Afficher toutes les heures de **0:0:0 à 1:0:0**,
avec **heures**, **minutes**, **secondes** (limité pour ne pas inonder l’écran).

**Fonction à définir :**

```c
void afficherHorloge();
```

<details>
<summary>💡 Corrigé et explication</summary>

```c
#include <stdio.h>

void afficherHorloge() {
    for (int h = 0; h <= 1; h++) {         // heures
        for (int m = 0; m < 60; m++) {     // minutes
            for (int s = 0; s < 60; s++) { // secondes
                printf("%02d:%02d:%02d\n", h, m, s);
            }
        }
    }
}

int main() {
    afficherHorloge();
    return 0;
}
```

🧠 **Explication**

* 3 boucles imbriquées :

  * `h` → heures,
  * `m` → minutes,
  * `s` → secondes.
* `%02d` → affiche toujours 2 chiffres (ex: `03` au lieu de `3`).
* Si tu veux moins de lignes, limite `m < 5` et `s < 5` pour les tests.

---
