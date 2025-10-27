# 🧠 Cours rapide : Les Variables en Python

---

## ⚙️ 1. Qu’est-ce qu’une variable ?

Une **variable** est un **nom** qui sert à **stocker une valeur** en mémoire.
C’est comme une **boîte étiquetée** dans laquelle on range une donnée.

```python
age = 18
nom = "Alice"
pi = 3.14
```

📦 Ici :

* `age` contient `18`
* `nom` contient `"Alice"`
* `pi` contient `3.14`

🧠 Une variable peut **changer de valeur** à tout moment :

```python
age = 18
age = 19  # on remplace l’ancienne valeur
```

---

## 🔤 2. Règles de nommage

En Python, les noms de variables doivent respecter certaines **règles** :

✅ Autorisé :

* lettres (`a-z`, `A-Z`)
* chiffres (`0-9`) *(mais pas au début !)*
* underscore `_`

❌ Interdit :

* les espaces
* les caractères spéciaux (`@`, `!`, `-`, etc.)
* commencer par un chiffre

### 🧩 Exemples valides :

```python
nom = "Bob"
age_utilisateur = 25
note1 = 18
```

### 🚫 Exemples invalides :

```python
1nom = "Erreur"     # commence par un chiffre
nom utilisateur = "Erreur"  # espace interdit
nom-utilisateur = "Erreur"  # tiret interdit
```

---

## 🧮 3. Types de variables

Python reconnaît automatiquement le **type** d’une variable selon sa valeur (on parle de *typage dynamique*).

### 🔹 Exemples principaux :

| Type    | Exemple                             | Description                  |
| ------- | ----------------------------------- | ---------------------------- |
| `int`   | `age = 20`                          | nombre entier                |
| `float` | `pi = 3.14`                         | nombre à virgule             |
| `str`   | `nom = "Alice"`                     | texte (chaîne de caractères) |
| `bool`  | `actif = True`                      | vrai ou faux                 |
| `list`  | `notes = [12, 15]`                  | liste de valeurs             |
| `tuple` | `coord = (10, 20)`                  | liste non modifiable         |
| `dict`  | `eleve = {"nom": "Bob", "age": 18}` | dictionnaire clé/valeur      |

---

## 🔍 4. Vérifier le type d’une variable

La fonction `type()` permet de connaître le type d’une variable.

```python
x = 42
print(type(x))  # <class 'int'>
```

🧠 Utile pour savoir si une variable contient du texte, un nombre, etc.

---

## 🔁 5. Conversion de types (cast)

On peut **convertir** une variable d’un type à un autre :

```python
age = "18"          # chaîne
age = int(age)      # devient entier
```

### 🔹 Fonctions courantes :

| Conversion | Exemple         | Résultat |
| ---------- | --------------- | -------- |
| `int()`    | `int("12")`     | 12       |
| `float()`  | `float("3.14")` | 3.14     |
| `str()`    | `str(42)`       | "42"     |
| `bool()`   | `bool(0)`       | False    |

🧠 Attention : certaines conversions peuvent provoquer des erreurs
(ex. `int("bonjour")` ❌).

---

## 🧠 6. Affectation multiple

Python permet d’assigner plusieurs variables **en une seule ligne** :

```python
x, y, z = 1, 2, 3
```

📦 ou donner la **même valeur** à plusieurs variables :

```python
a = b = c = 0
```

---

## ✏️ 7. Entrée utilisateur

Pour récupérer une valeur tapée au clavier → `input()`

```python
nom = input("Quel est ton nom ? ")
print("Bonjour", nom)
```

🧠 Tout ce que `input()` lit est une **chaîne de caractères**.
Pour obtenir un nombre :

```python
age = int(input("Ton âge : "))
```

---

## 🔄 8. Opérations sur les variables

### 🔹 Opérations mathématiques :

```python
a = 10
b = 3
print(a + b)  # addition → 13
print(a - b)  # soustraction → 7
print(a * b)  # multiplication → 30
print(a / b)  # division (résultat float)
print(a % b)  # reste (modulo)
print(a ** b) # puissance → 10³ = 1000
```

### 🔹 Opérations sur les chaînes :

```python
prenom = "Alice"
nom = "Dupont"
print(prenom + " " + nom)   # concaténation
print(prenom * 3)           # répétition
```

---

## 🧩 9. Les constantes (valeurs fixes)

Python n’a pas de vraies *constantes*,
mais par **convention**, on écrit leur nom en **majuscules** :

```python
PI = 3.14159
VITESSE_LUMIERE = 299792458
```

🧠 Cela indique aux autres développeurs que ces valeurs **ne doivent pas changer**.

---

## 💡 Résumé rapide :

| Concept            | Description                           | Exemple                    |
| ------------------ | ------------------------------------- | -------------------------- |
| **Variable**       | Boîte qui contient une valeur         | `age = 18`                 |
| **Type**           | Nature de la donnée                   | `int`, `float`, `str`, ... |
| **Affectation**    | Donner une valeur à une variable      | `x = 10`                   |
| **Conversion**     | Changer le type d’une variable        | `int("12") → 12`           |
| **Entrée clavier** | Récupérer une donnée de l’utilisateur | `input("...")`             |
| **Constante**      | Valeur fixe (en majuscules)           | `PI = 3.14`                |

---
