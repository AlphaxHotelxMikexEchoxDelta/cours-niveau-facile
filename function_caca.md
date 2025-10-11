# ⚙️ Cours rapide : Les Fonctions en C

---

## 🧠 Qu’est-ce qu’une fonction ?

Une **fonction** est un **bloc de code réutilisable** qui exécute une tâche précise.
Elle permet de **structurer** un programme et **éviter les répétitions**.

---

## 🧩 Structure d’une fonction

### Syntaxe générale :

```c
type_de_retour nom_de_fonction(paramètres) {
    // instructions
    return valeur; // si la fonction retourne quelque chose
}
```

### Explications :

* **`type_de_retour`** → le type de la valeur que la fonction renvoie (ex : `int`, `float`, `void`…)
* **`nom_de_fonction`** → le nom que vous donnez à la fonction
* **`paramètres`** → les données que vous passez à la fonction
* **`return`** → renvoie une valeur à celui qui appelle la fonction

---

## 🧩 Exemple 1 : fonction sans paramètre et sans retour

```c
#include <stdio.h>

void direBonjour() {
    printf("Bonjour !\n");
}

int main() {
    direBonjour(); // appel de la fonction
    return 0;
}
```

📖 **En mots :**

* `void` = ne renvoie rien
* `direBonjour()` = affiche "Bonjour !"
* On l'appelle dans le `main()`

---

## 🧩 Exemple 2 : fonction avec paramètres

```c
#include <stdio.h>

void saluer(char nom[]) {
    printf("Bonjour %s !\n", nom);
}

int main() {
    saluer("Alice");
    saluer("Bob");
    return 0;
}
```

📖 **En mots :**

* La fonction reçoit un **paramètre** (`nom`)
* Elle affiche un message personnalisé

---

## 🧩 Exemple 3 : fonction avec retour (`return`)

```c
#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

int main() {
    int resultat = addition(3, 5);
    printf("Le résultat est : %d\n", resultat);
    return 0;
}
```

📖 **En mots :**

* `addition()` prend deux nombres et **retourne leur somme**
* `resultat` reçoit la valeur retournée

---

## 🧩 Exemple 4 : déclaration et définition séparées

Souvent, on **déclare** la fonction avant le `main()` et on **la définit** après.

```c
#include <stdio.h>

// déclaration (prototype)
int carre(int x);

int main() {
    int n = 4;
    printf("Le carré de %d est %d\n", n, carre(n));
    return 0;
}

// définition
int carre(int x) {
    return x * x;
}
```

📖 **En mots :**

* Le **prototype** (avant `main`) annonce au compilateur que la fonction existe.
* La **définition** (après `main`) contient le code réel.

---

## 🔁 Exemple 5 : appel de fonctions entre elles

```c
#include <stdio.h>

int addition(int a, int b) {
    return a + b;
}

void afficherSomme(int a, int b) {
    int s = addition(a, b);
    printf("Somme = %d\n", s);
}

int main() {
    afficherSomme(4, 7);
    return 0;
}
```

📖 **En mots :**

* Une fonction (`afficherSomme`) peut **appeler une autre fonction** (`addition`).

---

## ⚠️ Points importants

| Concept              | Description                               |
| -------------------- | ----------------------------------------- |
| **Prototype**        | Déclare la fonction avant son utilisation |
| **Appel**            | Exécute la fonction                       |
| **Paramètres**       | Données envoyées à la fonction            |
| **Valeur de retour** | Donnée renvoyée par `return`              |
| **`void`**           | Type spécial indiquant "aucune valeur"    |

---

## 💡 Résumé rapide

| Type de fonction            | Exemple                      | Retourne quelque chose ? |
| --------------------------- | ---------------------------- | ------------------------ |
| Sans paramètre, sans retour | `void direBonjour()`         | ❌                        |
| Avec paramètre, sans retour | `void saluer(char nom[])`    | ❌                        |
| Avec paramètre et retour    | `int addition(int a, int b)` | ✅                        |

---

## 🔧 Petit exercice :

💬 **Exercice :**
Écrire une fonction `estPair(int n)` qui retourne `1` si `n` est pair, sinon `0`.

💡 **Correction :**

```c
#include <stdio.h>

int estPair(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int nombre = 7;

    if (estPair(nombre))
        printf("%d est pair\n", nombre);
    else
        printf("%d est impair\n", nombre);

    return 0;
}
```
