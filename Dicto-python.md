# 🐍 Petit Dictionnaire du Python pour Débutant

## 🔹 Fonction

Une **fonction** regroupe du code réutilisable.
On la **définit** avec `def`, puis on **l’appelle** quand on veut.

```python
def dire_bonjour():
    print("Bonjour !")
```

🧠 `def` = définit une fonction.
Si elle **renvoie** quelque chose, on utilise `return`.

---

## 🔹 Boucle `for`

Répète une action un **nombre défini** de fois.

```python
for i in range(10):
    print(i)
```

🧠 `range(10)` génère les nombres de `0` à `9`.
➡️ `range(départ, fin, pas)` (le `pas` vaut 1 par défaut).

---

## 🔹 Boucle `while`

Répète une action **tant qu’une condition est vraie**.

```python
x = 0
while x < 5:
    x += 1
```

🧠 Si la condition est fausse dès le départ → la boucle ne s’exécute pas.

---

## 🔹 Condition `if / elif / else`

Teste une condition et agit selon le cas.

```python
a = 3

if a > 0:
    print("Positif")
elif a == 0:
    print("Zéro")
else:
    print("Négatif")
```

🧠 `elif` = “sinon si”, équivalent de `else if` en C.

---

## 🔹 “switch / case” → `match / case` (Python 3.10+)

Permet de choisir entre plusieurs cas précis.

```python
choix = 2

match choix:
    case 1:
        print("Un")
    case 2:
        print("Deux")
    case _:
        print("Autre")
```

🧠 `_` = “cas par défaut”.

---

## 🔹 `print()`

Affiche du texte ou des valeurs.

```python
print("Salut !")
print(nombre)
print(f"Tu as {age} ans")
```

🧠 `f"..."` = **f-string**, permet d’insérer des variables directement.

---

## 🔹 `input()`

Lit ce que l’utilisateur tape au clavier.

```python
nom = input("Ton nom : ")
print("Bonjour", nom)
```

🧠 Tout ce que `input()` lit est une **chaîne de caractères**.
Pour un nombre → on convertit : `int(input("Âge : "))`.

---

## 🔹 Opérateur `%` (modulo)

Donne le **reste** d’une division.

```python
print(5 % 2)  # 1
print(6 % 2)  # 0
```

🧠 Très utile pour tester si un nombre est pair (`n % 2 == 0`).

---

## 🔹 `break`

Arrête une boucle immédiatement.

```python
for i in range(10):
    if i == 5:
        break
    print(i)
```

---

## 🔹 `return`

Met fin à une fonction et peut **renvoyer une valeur**.

```python
def carre(x):
    return x * x
```

---

## 🔹 Point d’entrée du programme

En Python, on écrit souvent ceci pour **définir le code principal** :

```python
def main():
    print("Programme principal")

if __name__ == "__main__":
    main()
```

🧠 Cela permet d’exécuter du code **seulement si le fichier est lancé directement**.

---

## 🔹 Commentaire

Texte ignoré par Python, utile pour expliquer le code.

```python
# commentaire sur une ligne

"""
commentaire
sur plusieurs lignes
"""
```

---

## 🔹 Opérateurs logiques : `and`, `or`, `not`

### 🟩 ET logique (`and`)

Vrai seulement si **toutes les conditions sont vraies**.

```python
if age > 18 and age < 30:
    print("Entre 18 et 30 ans")
```

---

### 🟨 OU logique (`or`)

Vrai si **au moins une condition est vraie**.

```python
if note == 0 or note == 20:
    print("Note exceptionnelle !")
```

---

### 🟥 NON logique (`not`)

Inverse la condition.

```python
if not actif:
    print("Utilisateur inactif")
```

---

### 🔹 Exemple combiné

```python
if (x > 0 and x < 10) or x == 100:
    print("x est dans l’intervalle ou vaut 100")
```

🧠 Se lit comme :

> “Si x est entre 0 et 10 **ou** si x vaut 100.”

---

### ⚙️ Astuce mémoire

| Opérateur | Nom         | Signification               | Exemple            | Résultat |
| --------- | ----------- | --------------------------- | ------------------ | -------- |
| `and`     | ET logique  | Les deux doivent être vrais | `True and True`    | ✅ vrai   |
| `or`      | OU logique  | Au moins un vrai suffit     | `True or False`    | ✅ vrai   |
| `not`     | NON logique | Inverse la valeur           | `not True → False` |          |

---

## 🧩 Astuce Mémoire Rapide

| Concept     | À retenir                       |
| ----------- | ------------------------------- |
| **for**     | nombre de tours connu           |
| **while**   | tant que la condition est vraie |
| **if/elif** | teste une condition             |
| **match**   | plusieurs choix possibles       |
| **def**     | crée une fonction réutilisable  |
| **print**   | affiche à l’écran               |
| **input**   | lit au clavier                  |
| **%**       | reste de la division            |
| **main**    | point de départ du programme    |

---
