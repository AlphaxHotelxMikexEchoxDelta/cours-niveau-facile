# 🧠 Cours rapide : Conditions & Boucles en C

---

## ⚙️ 1. Les conditions (`if`, `else if`, `else`)

Les **conditions** servent à exécuter du code seulement si une certaine **expression logique** est vraie (`true`).

### 🧩 Syntaxe :

```c
if (condition) {
    // code si condition est vraie
} else if (autre_condition) {
    // code si autre_condition est vraie
} else {
    // code si aucune condition n'est vraie
}
```

### 🧠 Exemple :

```c
#include <stdio.h>

int main() {
    int age = 18;

    if (age < 18) {
        printf("Tu es mineur.\n");
    } else if (age == 18) {
        printf("Tu viens d'atteindre la majorité !\n");
    } else {
        printf("Tu es majeur.\n");
    }

    return 0;
}
```

📖 **En mots :**

* Si `age` est inférieur à 18 → affiche "Tu es mineur"
* Sinon si `age` est égal à 18 → affiche "Tu viens d'atteindre la majorité !"
* Sinon → affiche "Tu es majeur"

---

## 🔀 2. Le `switch...case`

Le `switch` est utile quand on veut comparer une **même variable** à plusieurs **valeurs possibles**.

### 🧩 Syntaxe :

```c
switch (variable) {
    case valeur1:
        // code si variable == valeur1
        break;

    case valeur2:
        // code si variable == valeur2
        break;

    default:
        // code si aucune valeur ne correspond
        break;
}
```

### 🧠 Exemple :

```c
#include <stdio.h>

int main() {
    int jour = 3;

    switch (jour) {
        case 1:
            printf("Lundi\n");
            break;
        case 2:
            printf("Mardi\n");
            break;
        case 3:
            printf("Mercredi\n");
            break;
        default:
            printf("Jour inconnu\n");
    }

    return 0;
}
```

📖 **En mots :**

* Si `jour` vaut 1 → affiche "Lundi"
* Si `jour` vaut 2 → affiche "Mardi"
* Si `jour` vaut 3 → affiche "Mercredi"
* Sinon → affiche "Jour inconnu"

---

## 🔁 3. Les boucles

Les **boucles** permettent de répéter des instructions **tant qu'une condition est vraie**.

---

### 🔸 a) `while`

Répète **tant que la condition est vraie**.

#### 🧩 Syntaxe :

```c
while (condition) {
    // code à répéter
}
```

#### 🧠 Exemple :

```c
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("Compteur : %d\n", i);
        i++; // on incrémente i
    }

    return 0;
}
```

📖 **En mots :**

* Tant que `i` ≤ 5 → affiche le nombre et augmente `i`.

---

### 🔸 b) `do...while`

Comme `while`, mais la boucle **s’exécute au moins une fois**, même si la condition est fausse.

#### 🧩 Syntaxe :

```c
do {
    // code à répéter
} while (condition);
```

#### 🧠 Exemple :

```c
#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("Valeur de i : %d\n", i);
        i++;
    } while (i <= 3);

    return 0;
}
```

📖 **En mots :**

* Le bloc s’exécute une première fois, puis vérifie la condition `i <= 3`.

---

### 🔸 c) `for`

Utilisé quand on sait **combien de fois** on veut répéter le code.

#### 🧩 Syntaxe :

```c
for (initialisation; condition; mise_à_jour) {
    // code à répéter
}
```

#### 🧠 Exemple :

```c
#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("i = %d\n", i);
    }

    return 0;
}
```

📖 **En mots :**

* Démarre avec `i = 0`
* Continue tant que `i < 5`
* Après chaque tour, augmente `i` de 1

---

## 💡 Résumé rapide :

| Structure    | Sert à...                               | Exécuté combien de fois ? |
| ------------ | --------------------------------------- | ------------------------- |
| `if / else`  | Vérifier une ou plusieurs conditions    | 0 ou 1 fois               |
| `switch`     | Choisir un cas précis selon une valeur  | 0 ou 1 fois               |
| `while`      | Répéter tant qu’une condition est vraie | 0 à N fois                |
| `do...while` | Répéter au moins une fois               | 1 à N fois                |
| `for`        | Répéter un nombre connu de fois         | 0 à N fois                |
