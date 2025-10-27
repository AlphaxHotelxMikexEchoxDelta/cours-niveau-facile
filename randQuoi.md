# 🎲 Micro Cours : Le Module `random` et les Valeurs Aléatoires en Python

---

## ⚙️ 1. À quoi sert `random` ?

Le module **`random`** permet de **générer des valeurs aléatoires** :
nombres, éléments d’une liste, tirages, mélanges, etc.

Avant de l’utiliser, on doit **l’importer** :

```python
import random
```

---

## 🔹 2. Générer un nombre aléatoire

### 🧩 a) Nombre flottant entre 0 et 1

```python
x = random.random()
print(x)
```

➡️ Exemple de sortie : `0.73245`
🧠 Retourne un **nombre décimal** aléatoire dans l’intervalle `[0, 1[`.

---

### 🧩 b) Nombre entier dans un intervalle

```python
x = random.randint(1, 6)
print(x)
```

➡️ Exemple : `4`
🧠 Donne un **entier aléatoire entre 1 et 6 inclus** (comme un dé 🎲).

---

### 🧩 c) Nombre flottant dans un intervalle

```python
x = random.uniform(1, 10)
print(x)
```

➡️ Exemple : `7.3284`
🧠 Retourne un **nombre à virgule aléatoire** entre 1 et 10.

---

## 🔹 3. Tirer un élément aléatoire d’une liste

```python
couleurs = ["rouge", "bleu", "vert"]
choix = random.choice(couleurs)
print(choix)
```

➡️ Exemple : `bleu`
🧠 Choisit **un élément au hasard** dans la liste.

---

## 🔹 4. Mélanger une liste

```python
cartes = ["As", "Roi", "Dame", "Valet"]
random.shuffle(cartes)
print(cartes)
```

➡️ Exemple : `['Dame', 'As', 'Valet', 'Roi']`
🧠 Mélange les éléments de la liste **sur place** (comme un paquet de cartes).

---

## 🔹 5. Tirer plusieurs éléments aléatoires

### 🧩 Sans répétition :

```python
nombres = [1, 2, 3, 4, 5, 6]
tirage = random.sample(nombres, 3)
print(tirage)
```

➡️ Exemple : `[5, 1, 3]`
🧠 Tire **3 valeurs distinctes** au hasard.

### 🧩 Avec répétition :

```python
tirage = random.choices(nombres, k=3)
print(tirage)
```

➡️ Exemple : `[2, 2, 5]`
🧠 Tire **3 valeurs** mais certaines peuvent revenir.

---

## 🔹 6. Fixer la "graine" (seed)

Pour **reproduire un tirage identique** à chaque exécution (utile en tests) :

```python
random.seed(42)
print(random.randint(1, 10))
```

🧠 Le même `seed` → **le même résultat à chaque fois**.

---

## 💡 Résumé rapide :

| Fonction                   | Description                | Exemple   | Résultat  |
| -------------------------- | -------------------------- | --------- | --------- |
| `random.random()`          | flottant entre 0 et 1      | `0.53`    | aléatoire |
| `random.randint(a,b)`      | entier entre a et b        | `1 à 6`   | aléatoire |
| `random.uniform(a,b)`      | flottant entre a et b      | `1.25`    | aléatoire |
| `random.choice(liste)`     | un élément au hasard       | `"bleu"`  | aléatoire |
| `random.shuffle(liste)`    | mélange la liste           | `[3,1,2]` | aléatoire |
| `random.sample(liste, k)`  | k éléments uniques         | `[2,5,1]` | aléatoire |
| `random.choices(liste, k)` | k éléments avec répétition | `[3,3,1]` | aléatoire |

---

## 🧠 Exemple complet :

```python
import random

random.seed(1)  # graine (optionnelle)

print("🎲 Nombre entre 1 et 10 :", random.randint(1, 10))
print("💧 Nombre flottant :", random.uniform(0, 1))
print("🎨 Couleur :", random.choice(["rouge", "bleu", "vert"]))
```

---
