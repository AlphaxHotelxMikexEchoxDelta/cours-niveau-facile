# 📘 Petit Dictionnaire du C pour Débutant

## 🔹 Fonction
Une **fonction** sert à ranger du code pour le réutiliser.  
On la **déclare** une fois, puis on **l’appelle** quand on en a besoin.  
```c
void direBonjour() {
    printf("Bonjour !");
}
````

🧠 “void” = ne renvoie rien, sinon on écrit le type du résultat (ex: `int`, `float`…).

---

## 🔹 Boucle `for`

Répète une action un nombre **défini** de fois.

```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

🧠 3 parties :
1️⃣ départ (`int i = 0`)
2️⃣ condition (`i < 10`)
3️⃣ incrément (`i++` → +1 à chaque tour)

---

## 🔹 Boucle `while`

Répète une action **tant qu’une condition est vraie**.

```c
while (x < 5) {
    x++;
}
```

🧠 Si la condition est fausse au début → ne s’exécute pas du tout.

---

## 🔹 Boucle `do...while`

Fait **au moins une fois** le bloc, **puis vérifie la condition**.

```c
do {
    printf("Encore !\n");
} while (choix != 0);
```

🧠 Toujours exécutée au moins une fois, même si la condition est fausse au départ.

---

## 🔹 `if / else if / else`

Permet de **tester une condition** et faire **différentes actions** selon le cas.

```c
if (a > 0)
    printf("Positif");
else if (a == 0)
    printf("Zéro");
else
    printf("Négatif");
```

---

## 🔹 `switch / case`

Choisit entre **plusieurs options précises**.

```c
switch (choix) {
    case 1: printf("Un"); break;
    case 2: printf("Deux"); break;
    default: printf("Autre");
}
```

🧠 `break` = arrête le `switch` après avoir exécuté un `case`.

---

## 🔹 `printf`

Affiche du texte à l’écran.

```c
printf("Salut !");
printf("%d", nombre); // %d = entier
```

🧠 `%d` (entier), `%f` (flottant), `%s` (texte), `%c` (caractère).

---

## 🔹 `scanf`

Lit ce que l’utilisateur tape au clavier.

```c
scanf("%d", &x);
```

🧠 Le `&` indique **où stocker** la valeur.

---

## 🔹 Opérateur `%` (modulo)

Donne le **reste** de la division.

```c
5 % 2 → 1
6 % 2 → 0
```

🧠 Très utile pour savoir si un nombre est pair (`n % 2 == 0`).

---

## 🔹 `break`

Sort d’une boucle ou d’un `switch` immédiatement.

## 🔹 `return`

Met fin à une fonction et (si besoin) **renvoie une valeur**.

```c
return 0; // souvent à la fin du main
```

---

## 🔹 `main()`

C’est la **porte d’entrée** du programme.
Tout commence ici.

```c
int main() {
    // ton code ici
    return 0;
}
```

---

## 🔹 Commentaire

Texte ignoré par le programme, utile pour expliquer le code.

```c
// commentaire sur une ligne
/* commentaire
   sur plusieurs lignes */
```

---

## 🔹 Opérateurs logiques : ET (`&&`) et OU (`||`)

### 🟩 ET logique (`&&`)
Vérifie que **toutes les conditions sont vraies**.  
👉 Si une seule est fausse → tout est faux.

```c
if (age > 18 && age < 30)
    printf("Entre 18 et 30 ans");
````

🧠 Ici, les deux conditions doivent être vraies en même temps :

* `age > 18`
* **et aussi** `age < 30`

---

### 🟨 OU logique (`||`)

Vérifie que **au moins une condition est vraie**.
👉 Si une des deux est vraie → tout est vrai.

```c
if (note == 0 || note == 20)
    printf("Note exceptionnelle !");
```

🧠 Ici :

* si `note == 0` → vrai
* ou si `note == 20` → vrai
* sinon → faux

---

### 🔹 Exemple combiné

```c
if ((x > 0 && x < 10) || x == 100)
    printf("x est dans l’intervalle ou vaut 100");
```

🧠 Se lit comme :

> “Si x est entre 0 et 10 **OU** si x vaut 100.”

---

### ⚙️ Astuce mémoire :

* **ET (`&&`)** = les deux doivent être vrais → “tout le monde d’accord”.
* **OU (`||`)** = au moins un vrai → “il suffit qu’un dise oui”.
* **!** = inverse → “le contraire”.

---

### 🧠 Résumé ET / OU

| Symbole | Nom         | Signification               | Exemple             | Résultat                |
| ------- | ----------- | --------------------------- | ------------------- | ----------------------- |
| `&&`    | ET logique  | Les deux doivent être vrais | `1 && 1`            | ✅ vrai                 |
| `\|\|`  | OU logique  | Au moins un vrai suffit     | `1 \|\| 0`          | ✅ vrai                 |
| `!`     | NON logique | Inverse la valeur           | `!1` → 0 / `!0` → 1 |                         |

## 🧩 Astuce Mémoire Rapide

| Concept      | À retenir                       |
| ------------ | ------------------------------- |
| **for**      | nombre de tours connu           |
| **while**    | tant que la condition est vraie |
| **do while** | toujours au moins une fois      |
| **if/else**  | teste une condition             |
| **switch**   | plusieurs choix possibles       |
| **fonction** | bloc de code réutilisable       |
| **printf**   | affiche                         |
| **scanf**    | lit au clavier                  |
| **%**        | reste de la division            |
| **main**     | point de départ du programme    |


