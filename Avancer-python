# 🧠 Cours rapide : Conditions & Boucles en Python

---

## ⚙️ 1. Les conditions (`if`, `elif`, `else`)

Les **conditions** permettent d’exécuter du code seulement si une **expression logique** est vraie (`True`).

### 🧩 Syntaxe :

```python
if condition:
    # code si condition est vraie
elif autre_condition:
    # code si autre_condition est vraie
else:
    # code si aucune condition n'est vraie
```

### 🧠 Exemple :

```python
age = 18

if age < 18:
    print("Tu es mineur.")
elif age == 18:
    print("Tu viens d'atteindre la majorité !")
else:
    print("Tu es majeur.")
```

📖 **En mots :**

* Si `age` < 18 → affiche "Tu es mineur"
* Sinon si `age` == 18 → affiche "Tu viens d'atteindre la majorité !"
* Sinon → affiche "Tu es majeur"

---

## 🔀 2. Le `match...case` (équivalent du `switch` en Python 3.10+)

Le `match` permet de comparer **une même variable** à plusieurs **valeurs possibles**.

### 🧩 Syntaxe :

```python
match variable:
    case valeur1:
        # code si variable == valeur1
    case valeur2:
        # code si variable == valeur2
    case _:
        # code si aucune valeur ne correspond
```

### 🧠 Exemple :

```python
jour = 3

match jour:
    case 1:
        print("Lundi")
    case 2:
        print("Mardi")
    case 3:
        print("Mercredi")
    case _:
        print("Jour inconnu")
```

📖 **En mots :**

* Si `jour` == 1 → affiche "Lundi"
* Si `jour` == 2 → affiche "Mardi"
* Si `jour` == 3 → affiche "Mercredi"
* Sinon → affiche "Jour inconnu"

---

## 🔁 3. Les boucles

Les **boucles** permettent de répéter du code **tant qu’une condition est vraie** ou un **nombre de fois défini**.

---

### 🔸 a) `while`

Répète **tant que la condition est vraie**.

#### 🧩 Syntaxe :

```python
while condition:
    # code à répéter
```

#### 🧠 Exemple :

```python
i = 1

while i <= 5:
    print("Compteur :", i)
    i += 1  # on incrémente i
```

📖 **En mots :**

* Tant que `i` ≤ 5 → affiche le nombre et augmente `i`.

---

### 🔸 b) `for`

Utilisé quand on sait **combien de fois** on veut répéter le code.

#### 🧩 Syntaxe :

```python
for variable in range(début, fin, pas):
    # code à répéter
```

#### 🧠 Exemple :

```python
for i in range(5):
    print("i =", i)
```

📖 **En mots :**

* Démarre à `i = 0`
* Continue jusqu’à `i = 4`
* Après chaque tour → ajoute 1 à `i`

🧠 `range(5)` → crée la suite `0, 1, 2, 3, 4`

---

### 🔸 c) `while` simulant un `do...while`

Python **n’a pas de** `do...while`,
mais on peut le **simuler** ainsi 👇

#### 🧩 Exemple :

```python
i = 1

while True:
    print("Valeur de i :", i)
    i += 1
    if i > 3:
        break  # sort de la boucle
```

📖 **En mots :**

* Exécute une première fois le bloc,
  puis vérifie la condition pour sortir.

---

## 💡 Résumé rapide :

| Structure         | Sert à...                               | Exécuté combien de fois ? |
| ----------------- | --------------------------------------- | ------------------------- |
| `if / else`       | Vérifier une ou plusieurs conditions    | 0 ou 1 fois               |
| `match / case`    | Choisir un cas précis selon une valeur  | 0 ou 1 fois               |
| `while`           | Répéter tant qu’une condition est vraie | 0 à N fois                |
| `simulé do/while` | Répéter au moins une fois               | 1 à N fois                |
| `for`             | Répéter un nombre connu de fois         | 0 à N fois                |

---
