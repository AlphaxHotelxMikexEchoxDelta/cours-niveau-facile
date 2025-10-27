# ⚙️ Cours rapide : Les Fonctions en Python

---

## 🧠 Qu’est-ce qu’une fonction ?

Une **fonction** est un **bloc de code réutilisable** qui exécute une tâche précise.
Elle permet de **structurer** un programme et **éviter les répétitions**.

---

## 🧩 Structure d’une fonction

### Syntaxe générale :

```python
def nom_de_fonction(paramètres):
    # instructions
    return valeur  # si la fonction retourne quelque chose
```

### Explications :

* **`def`** → mot clé pour déclarer une fonction
* **`nom_de_fonction`** → le nom que vous donnez à la fonction
* **`paramètres`** → les données que vous passez à la fonction
* **`return`** → renvoie une valeur à celui qui appelle la fonction (optionnel)

---

## 🧩 Exemple 1 : fonction sans paramètre et sans retour

```python
def dire_bonjour():
    print("Bonjour !")

# appel de la fonction
dire_bonjour()
```

📖 **En mots :**

* Pas de paramètres, pas de `return`.
* On appelle la fonction directement pour exécuter son code.

---

## 🧩 Exemple 2 : fonction avec paramètres

```python
def saluer(nom):
    print("Bonjour", nom, "!")

saluer("Alice")
saluer("Bob")
```

📖 **En mots :**

* La fonction reçoit un **paramètre** (`nom`)
* Elle affiche un message personnalisé selon l’argument passé.

---

## 🧩 Exemple 3 : fonction avec retour (`return`)

```python
def addition(a, b):
    return a + b

resultat = addition(3, 5)
print("Le résultat est :", resultat)
```

📖 **En mots :**

* `addition()` prend deux nombres et **retourne leur somme**
* `resultat` reçoit la valeur retournée par la fonction.

---

## 🧩 Exemple 4 : déclaration et définition séparées (concept Python)

En Python, on **déclare et définit la fonction en même temps**, mais on peut organiser le code de façon similaire :

```python
def carre(x):
    return x * x

n = 4
print("Le carré de", n, "est", carre(n))
```

📖 **En mots :**

* Le nom et les paramètres sont définis avant l’appel.
* `carre(n)` renvoie le résultat directement.

---

## 🔁 Exemple 5 : appel de fonctions entre elles

```python
def addition(a, b):
    return a + b

def afficher_somme(a, b):
    s = addition(a, b)
    print("Somme =", s)

afficher_somme(4, 7)
```

📖 **En mots :**

* Une fonction peut **appeler une autre fonction**.
* `afficher_somme()` utilise le résultat de `addition()`.

---

## ⚠️ Points importants

| Concept              | Description                            |
| -------------------- | -------------------------------------- |
| **Appel**            | Exécute la fonction                    |
| **Paramètres**       | Données envoyées à la fonction         |
| **Valeur de retour** | Donnée renvoyée par `return`           |
| **Sans retour**      | La fonction n’a pas besoin de `return` |

---

## 💡 Résumé rapide

| Type de fonction            | Exemple              | Retourne quelque chose ? |
| --------------------------- | -------------------- | ------------------------ |
| Sans paramètre, sans retour | `def dire_bonjour()` | ❌                        |
| Avec paramètre, sans retour | `def saluer(nom)`    | ❌                        |
| Avec paramètre et retour    | `def addition(a, b)` | ✅                        |

---

## 🔧 Petit exercice :

💬 **Exercice :**
Écrire une fonction `est_pair(n)` qui retourne `True` si `n` est pair, sinon `False`.

💡 **Correction :**

```python
def est_pair(n):
    if n % 2 == 0:
        return True
    else:
        return False

nombre = 7

if est_pair(nombre):
    print(nombre, "est pair")
else:
    print(nombre, "est impair")
```

📖 **En mots :**

* `%` calcule le reste de la division.
* `return True` si le nombre est pair, sinon `return False`.
* La fonction peut être utilisée dans un `if` directement.

---
