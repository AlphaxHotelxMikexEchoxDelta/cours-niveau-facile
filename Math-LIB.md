# 🧮 Cours rapide : Méthodes Mathématiques & Librairies en Python

---

## ⚙️ 1. Qu’est-ce qu’une *librairie* (ou *bibliothèque*) ?

Une **librairie** (ou *module*) est un **ensemble de fonctions toutes prêtes**
que tu peux **importer** dans ton programme pour ajouter des capacités à Python.

🧩 Exemple :

```python
import math
```

Cela te donne accès à **plein d’outils mathématiques** (racines, sinus, puissances, etc.)
sans avoir à les programmer toi-même.

---

### 📦 Types de bibliothèques :

| Type                        | Exemples courants               | Sert à…                            |
| --------------------------- | ------------------------------- | ---------------------------------- |
| 🔹 **Standard (intégrées)** | `math`, `random`, `datetime`    | Déjà incluses dans Python          |
| 🔹 **Externes**             | `numpy`, `pandas`, `matplotlib` | À installer avec `pip install ...` |

---

### 🧠 Importer une librairie

#### 🔸 Import complet :

```python
import math
print(math.sqrt(16))
```

#### 🔸 Import partiel :

```python
from math import sqrt
print(sqrt(16))
```

#### 🔸 Import avec un alias :

```python
import math as m
print(m.sqrt(16))
```

---

## 📘 2. Le module `math`

La **librairie standard `math`** contient toutes les fonctions de base utilisées en mathématiques.

---

### 🔹 Les constantes

```python
import math

print(math.pi)      # 3.141592653589793
print(math.e)       # 2.718281828459045
```

🧠 `math.pi` → π
🧠 `math.e` → nombre d’Euler

---

### 🔹 Fonctions de base

| Fonction         | Utilisation                                      | Exemple           | Résultat |
| ---------------- | ------------------------------------------------ | ----------------- | -------- |
| `math.sqrt(x)`   | Racine carrée                                    | `math.sqrt(9)`    | `3.0`    |
| `math.pow(x, y)` | Puissance xʸ                                     | `math.pow(2, 3)`  | `8.0`    |
| `math.floor(x)`  | Arrondi inférieur                                | `math.floor(3.7)` | `3`      |
| `math.ceil(x)`   | Arrondi supérieur                                | `math.ceil(3.1)`  | `4`      |
| `math.trunc(x)`  | Coupe les décimales                              | `math.trunc(3.9)` | `3`      |
| `abs(x)`         | Valeur absolue *(intégré, pas besoin de `math`)* | `abs(-5)`         | `5`      |

---

### 🔹 Fonctions trigonométriques

Toutes en **radians** ⚠️

| Fonction       | Description  | Exemple                       |
| -------------- | ------------ | ----------------------------- |
| `math.sin(x)`  | Sinus        | `math.sin(math.pi/2)` → `1.0` |
| `math.cos(x)`  | Cosinus      | `math.cos(0)` → `1.0`         |
| `math.tan(x)`  | Tangente     | `math.tan(math.pi/4)` → `1.0` |
| `math.asin(x)` | Arc-sinus    | `math.asin(1)` → `1.57`       |
| `math.acos(x)` | Arc-cosinus  | `math.acos(1)` → `0.0`        |
| `math.atan(x)` | Arc-tangente | `math.atan(1)` → `0.785`      |

🧠 Pour passer de **degrés à radians** :

```python
math.radians(180)   # 3.14159
```

et inversement :

```python
math.degrees(math.pi)  # 180.0
```

---

### 🔹 Fonctions logarithmiques & exponentielles

| Fonction        | Description          | Exemple            | Résultat |
| --------------- | -------------------- | ------------------ | -------- |
| `math.exp(x)`   | eˣ                   | `math.exp(1)`      | 2.718... |
| `math.log(x)`   | log naturel (base e) | `math.log(math.e)` | 1.0      |
| `math.log10(x)` | log base 10          | `math.log10(100)`  | 2.0      |
| `math.log2(x)`  | log base 2           | `math.log2(8)`     | 3.0      |

---

### 🔹 Fonctions spéciales

| Fonction            | Description                | Exemple                     |
| ------------------- | -------------------------- | --------------------------- |
| `math.factorial(x)` | Factorielle n!             | `math.factorial(5)` → `120` |
| `math.gcd(a, b)`    | Plus grand diviseur commun | `math.gcd(12, 8)` → `4`     |
| `math.comb(n, k)`   | Combinaisons (nCk)         | `math.comb(5, 2)` → `10`    |
| `math.perm(n, k)`   | Permutations (nPk)         | `math.perm(5, 2)` → `20`    |

---

## 🎲 3. Le module `random`

Permet de **générer des nombres aléatoires**.

```python
import random
```

| Fonction                | Exemple                           | Résultat              |
| ----------------------- | --------------------------------- | --------------------- |
| `random.random()`       | `random.random()`                 | nombre entre 0 et 1   |
| `random.randint(a, b)`  | `random.randint(1, 6)`            | entier entre 1 et 6   |
| `random.uniform(a, b)`  | `random.uniform(1, 5)`            | flottant entre 1 et 5 |
| `random.choice(liste)`  | `random.choice(["pile", "face"])` | "pile" ou "face"      |
| `random.shuffle(liste)` | `random.shuffle(cartes)`          | mélange une liste     |

---

## 🔢 4. Le module `statistics`

Permet de faire des **calculs statistiques** simples.

```python
import statistics
```

| Fonction                  | Exemple                         | Résultat                               |
| ------------------------- | ------------------------------- | -------------------------------------- |
| `statistics.mean(data)`   | moyenne                         | `statistics.mean([10, 20, 30]) → 20`   |
| `statistics.median(data)` | médiane                         | `statistics.median([1, 3, 9]) → 3`     |
| `statistics.mode(data)`   | mode (valeur la plus fréquente) | `statistics.mode([1,1,2,3]) → 1`       |
| `statistics.stdev(data)`  | écart type                      | `statistics.stdev([1,2,3,4,5]) → 1.58` |

---

## ⚡ 5. La bibliothèque `numpy` (pour les pros des maths 🧠)

`numpy` (à installer via `pip install numpy`)
est utilisée pour les **grands calculs numériques**, les **tableaux**, et les **formules rapides**.

```python
import numpy as np

a = np.array([1, 2, 3])
print(np.mean(a))   # moyenne
print(np.sqrt(a))   # racine carrée
print(np.sum(a))    # somme totale
```

🧠 Ultra optimisé, très utilisé en **data science** et **intelligence artificielle**.

---

## 💡 Résumé rapide

| Module       | Sert à...                     | Fonctions clés                    |
| ------------ | ----------------------------- | --------------------------------- |
| `math`       | Calculs de base               | `sqrt`, `sin`, `log`, `factorial` |
| `random`     | Tirages aléatoires            | `randint`, `choice`, `shuffle`    |
| `statistics` | Statistiques simples          | `mean`, `median`, `stdev`         |
| `numpy`      | Calculs scientifiques avancés | `array`, `mean`, `sum`            |

---

## ⚙️ Mini résumé sur les librairies

| Action                          | Code                    | Explication                   |
| ------------------------------- | ----------------------- | ----------------------------- |
| Importer une librairie          | `import math`           | charge toutes ses fonctions   |
| Importer une fonction précise   | `from math import sqrt` | évite d’écrire `math.` devant |
| Donner un alias                 | `import math as m`      | pratique pour raccourcir      |
| Installer une librairie externe | `pip install numpy`     | à faire une seule fois        |

---
