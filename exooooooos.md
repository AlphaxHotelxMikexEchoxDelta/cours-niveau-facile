## 🧩 Exercice 1

Créer une variable `nom` et stocker ton prénom dedans, puis afficher `"Bonjour, <nom> !"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
nom = "Alice"
print("Bonjour,", nom, "!")
```

🧠 **Explication**

* On crée une variable avec `nom = "Alice"`.
* `print()` permet d’afficher le contenu de la variable à l’écran.

</details>

---

## 🧩 Exercice 2

Créer deux variables `a` et `b` contenant deux nombres, puis afficher leur somme.

<details>
<summary>💡 Corrigé et explication</summary>

```python
a = 5
b = 3
somme = a + b
print(somme)
```

🧠 **Explication**

* On stocke les nombres dans `a` et `b`.
* L’opérateur `+` additionne les valeurs.
* Le résultat est stocké dans `somme` et affiché.

</details>

---

## 🧩 Exercice 3

Créer une variable `age`, puis créer une variable `age_dans_5_ans` qui contient l’âge dans 5 ans.

<details>
<summary>💡 Corrigé et explication</summary>

```python
age = 12
age_dans_5_ans = age + 5
print(age_dans_5_ans)
```

🧠 **Explication**

* On utilise l’addition pour calculer l’âge futur.
* La nouvelle variable contient le résultat.

</details>

---

## 🧩 Exercice 4

Créer une variable `longueur` et une variable `largeur` pour un rectangle, puis calculer et afficher l’aire.

<details>
<summary>💡 Corrigé et explication</summary>

```python
longueur = 10
largeur = 5
aire = longueur * largeur
print(aire)
```

🧠 **Explication**

* L’aire d’un rectangle = longueur × largeur.
* On stocke le résultat dans `aire`.

</details>

---

## 🧩 Exercice 5

Créer une variable `nom` et une variable `prenom`, puis afficher `"Nom complet : <prenom> <nom>"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
nom = "Dupont"
prenom = "Alice"
nom_complet = prenom + " " + nom
print("Nom complet :", nom_complet)
```

🧠 **Explication**

* Le `+` sert aussi à concaténer des chaînes de caractères.
* On ajoute un espace entre prénom et nom.

</details>

---

## 🧩 Exercice 6

Créer une variable `prix` et une variable `quantite`, puis calculer le total à payer.

<details>
<summary>💡 Corrigé et explication</summary>

```python
prix = 4.5
quantite = 3
total = prix * quantite
print(total)
```

🧠 **Explication**

* Multiplication d’un prix par la quantité.
* Le résultat est affiché.

</details>

---

## 🧩 Exercice 7

Créer une variable `temperature_celsius` et convertir sa valeur en Fahrenheit.

<details>
<summary>💡 Corrigé et explication</summary>

```python
temperature_celsius = 20
temperature_fahrenheit = temperature_celsius * 9/5 + 32
print(temperature_fahrenheit)
```

🧠 **Explication**

* Conversion : F = C × 9/5 + 32.
* On stocke le résultat dans une nouvelle variable.

</details>

---

## 🧩 Exercice 8

Créer une variable `jour` et une variable `mois`, puis créer une variable `date` qui affiche `"jour/mois"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
jour = 27
mois = 10
date = str(jour) + "/" + str(mois)
print(date)
```

🧠 **Explication**

* Les nombres doivent être convertis en chaînes avec `str()` pour être concaténés.
* On construit une chaîne représentant la date.

</details>

---

## 🧩 Exercice 9

Créer une variable `rayon` et calculer le périmètre d’un cercle (2 × π × r). Utiliser π = 3.14.

<details>
<summary>💡 Corrigé et explication</summary>

```python
rayon = 5
perimetre = 2 * 3.14 * rayon
print(perimetre)
```

🧠 **Explication**

* Formule du périmètre d’un cercle.
* On multiplie les variables pour obtenir le résultat.

</details>

---

## 🧩 Exercice 10

Créer une variable `texte` et afficher sa longueur avec `len()`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
texte = "Bonjour"
longueur_texte = len(texte)
print(longueur_texte)
```

🧠 **Explication**

* `len()` calcule le nombre de caractères d’une chaîne.
* On stocke le résultat dans une variable avant de l’afficher.

</details>

---

## 🧩 Exercice 11

Créer une variable `age` et afficher `"Majeur"` si l’âge est ≥ 18, sinon `"Mineur"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
age = 16

if age >= 18:
    print("Majeur")
else:
    print("Mineur")
```

🧠 **Explication**

* `if` teste une condition (`age >= 18`).
* `else` correspond au cas où la condition n’est pas vraie.
* Python utilise l’**indentation** pour délimiter les blocs.

</details>

---

## 🧩 Exercice 12

Créer une variable `nombre` et afficher `"Positif"`, `"Négatif"` ou `"Zéro"` selon la valeur.

<details>
<summary>💡 Corrigé et explication</summary>

```python
nombre = -3

if nombre > 0:
    print("Positif")
elif nombre < 0:
    print("Négatif")
else:
    print("Zéro")
```

🧠 **Explication**

* `elif` teste une deuxième condition si la première est fausse.
* `else` gère tous les autres cas.

</details>

---

## 🧩 Exercice 13

Créer une variable `nombre` et afficher `"Pair"` ou `"Impair"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
nombre = 7

if nombre % 2 == 0:
    print("Pair")
else:
    print("Impair")
```

🧠 **Explication**

* `%` calcule le reste d’une division.
* Si le reste est 0, le nombre est pair, sinon impair.

</details>

---

## 🧩 Exercice 14

Créer deux variables `a` et `b`, puis afficher `"a est plus grand"`, `"b est plus grand"` ou `"a et b sont égaux"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
a = 5
b = 5

if a > b:
    print("a est plus grand")
elif b > a:
    print("b est plus grand")
else:
    print("a et b sont égaux")
```

🧠 **Explication**

* On compare les deux variables avec `>` et `<`.
* `elif` permet un deuxième test si le premier n’est pas vrai.

</details>

---

## 🧩 Exercice 15

Créer une variable `temperature` et afficher si il fait `"Froid"` (<15), `"Chaud"` (>25) ou `"Tempéré"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
temperature = 20

if temperature < 15:
    print("Froid")
elif temperature > 25:
    print("Chaud")
else:
    print("Tempéré")
```

🧠 **Explication**

* Plusieurs conditions permettent de classer les valeurs.
* `else` prend tous les cas restants.

</details>

---

## 🧩 Exercice 16

Créer une variable `note` et afficher `"Admis"` si la note ≥ 10, sinon `"Échoué"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
note = 12

if note >= 10:
    print("Admis")
else:
    print("Échoué")
```

🧠 **Explication**

* La condition teste si la note atteint le seuil.
* Simple `if`/`else` pour deux cas possibles.

</details>

---

## 🧩 Exercice 17

Créer une variable `mois` (1 à 12) et afficher le trimestre correspondant (1er, 2e, 3e, 4e).

<details>
<summary>💡 Corrigé et explication</summary>

```python
mois = 5

if mois <= 3:
    print("1er trimestre")
elif mois <= 6:
    print("2e trimestre")
elif mois <= 9:
    print("3e trimestre")
else:
    print("4e trimestre")
```

🧠 **Explication**

* On utilise des conditions multiples pour classer les mois.
* Chaque `elif` teste un intervalle.

</details>

---

## 🧩 Exercice 18

Créer une variable `jour` (1 à 7) et afficher le nom du jour (1 = Lundi, ..., 7 = Dimanche).

<details>
<summary>💡 Corrigé et explication</summary>

```python
jour = 3

if jour == 1:
    print("Lundi")
elif jour == 2:
    print("Mardi")
elif jour == 3:
    print("Mercredi")
elif jour == 4:
    print("Jeudi")
elif jour == 5:
    print("Vendredi")
elif jour == 6:
    print("Samedi")
else:
    print("Dimanche")
```

🧠 **Explication**

* Chaque valeur possible a sa propre condition.
* `==` sert à tester l’égalité.

</details>

---

## 🧩 Exercice 19

Créer une variable `heure` (0 à 23) et afficher `"Matin"` (0-11), `"Après-midi"` (12-17), `"Soir"` (18-23).

<details>
<summary>💡 Corrigé et explication</summary>

```python
heure = 14

if heure <= 11:
    print("Matin")
elif heure <= 17:
    print("Après-midi")
else:
    print("Soir")
```

🧠 **Explication**

* On utilise des intervalles pour classer les heures de la journée.
* `else` prend toutes les valeurs supérieures.

</details>

---

## 🧩 Exercice 20

Créer une variable `mot` et afficher `"Long"` si sa longueur ≥ 10, sinon `"Court"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
mot = "Python"

if len(mot) >= 10:
    print("Long")
else:
    print("Court")
```

🧠 **Explication**

* `len(mot)` donne le nombre de caractères.
* La condition teste si le mot est long ou court.

</details>

---

## 🧩 Exercice 21

Afficher les nombres de 1 à 5 avec une boucle `while`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
i = 1
while i <= 5:
    print(i)
    i += 1
```

🧠 **Explication**

* `i = 1` initialise le compteur.
* `while i <= 5` continue tant que la condition est vraie.
* `i += 1` augmente `i` à chaque tour pour éviter une boucle infinie.

</details>

---

## 🧩 Exercice 22

Afficher les nombres pairs de 2 à 10 avec `while`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
i = 2
while i <= 10:
    print(i)
    i += 2
```

🧠 **Explication**

* On commence à 2 et on ajoute 2 à chaque tour pour n’afficher que les nombres pairs.

</details>

---

## 🧩 Exercice 23

Compter de 5 à 1 à l’envers avec `while`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
i = 5
while i >= 1:
    print(i)
    i -= 1
```

🧠 **Explication**

* On initialise `i` à 5 et on diminue à chaque tour.
* La boucle continue tant que `i >= 1`.

</details>

---

## 🧩 Exercice 24

Demander un nombre à l’utilisateur et l’afficher tant qu’il est positif.

<details>
<summary>💡 Corrigé et explication</summary>

```python
nombre = int(input("Entrez un nombre : "))

while nombre > 0:
    print("Nombre :", nombre)
    nombre = int(input("Entrez un nombre : "))
```

🧠 **Explication**

* `input()` récupère une valeur utilisateur.
* La boucle continue tant que le nombre est positif.

</details>

---

## 🧩 Exercice 25

Afficher les nombres de 1 à 10 et leur carré.

<details>
<summary>💡 Corrigé et explication</summary>

```python
i = 1
while i <= 10:
    print(i, "au carré =", i**2)
    i += 1
```

🧠 **Explication**

* `i**2` calcule le carré.
* On incrémente `i` pour avancer dans la boucle.

</details>

---

## 🧩 Exercice 26

Afficher les multiples de 3 de 3 à 30 avec `while`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
i = 3
while i <= 30:
    print(i)
    i += 3
```

🧠 **Explication**

* On commence à 3 et on ajoute 3 à chaque tour pour obtenir les multiples de 3.

</details>

---

## 🧩 Exercice 27

Afficher tous les nombres impairs de 1 à 15.

<details>
<summary>💡 Corrigé et explication</summary>

```python
i = 1
while i <= 15:
    print(i)
    i += 2
```

🧠 **Explication**

* On commence à 1 et on ajoute 2 pour passer uniquement aux nombres impairs.

</details>

---

## 🧩 Exercice 28

Calculer la somme des nombres de 1 à 10 avec `while`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
i = 1
somme = 0
while i <= 10:
    somme += i
    i += 1
print("Somme =", somme)
```

🧠 **Explication**

* `somme += i` ajoute chaque nombre à la somme totale.
* La boucle incrémente `i` jusqu’à 10.

</details>

---

## 🧩 Exercice 29

Demander un mot à l’utilisateur et répéter `"Bonjour <mot>"` 5 fois.

<details>
<summary>💡 Corrigé et explication</summary>

```python
mot = input("Entrez un mot : ")
i = 1
while i <= 5:
    print("Bonjour", mot)
    i += 1
```

🧠 **Explication**

* On répète l’affichage 5 fois grâce au compteur `i`.

</details>

---

## 🧩 Exercice 30

Afficher les nombres de 10 à 1 sauf 5.

<details>
<summary>💡 Corrigé et explication</summary>

```python
i = 10
while i >= 1:
    if i != 5:
        print(i)
    i -= 1
```

🧠 **Explication**

* `if i != 5` permet de sauter le nombre 5.
* On décrémente `i` à chaque tour pour aller à 1.

</details>

---

## 🧩 Exercice 31

Afficher les nombres de 1 à 10 avec une boucle `for`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
for i in range(1, 11):
    print(i)
```

🧠 **Explication**

* `range(1, 11)` génère les nombres de 1 à 10.
* La boucle `for` parcourt chaque nombre et l’affiche.

</details>

---

## 🧩 Exercice 32

Afficher les carrés des nombres de 1 à 5.

<details>
<summary>💡 Corrigé et explication</summary>

```python
for i in range(1, 6):
    print(i, "au carré =", i**2)
```

🧠 **Explication**

* `i**2` calcule le carré de chaque nombre dans la boucle.

</details>

---

## 🧩 Exercice 33

Afficher les multiples de 4 jusqu’à 40.

<details>
<summary>💡 Corrigé et explication</summary>

```python
for i in range(4, 41, 4):
    print(i)
```

🧠 **Explication**

* `range(4, 41, 4)` commence à 4, finit à 40, et saute de 4 en 4.
* Cela affiche tous les multiples de 4.

</details>

---

## 🧩 Exercice 34

Afficher les nombres impairs de 1 à 15.

<details>
<summary>💡 Corrigé et explication</summary>

```python
for nombre in range(1, 16, 2):
    print(nombre)
```

🧠 **Explication**

* `range(1, 16, 2)` commence à 1 et incrémente de 2 pour n’avoir que les nombres impairs.
* Ici, on a utilisé `nombre` comme nom de variable au lieu de `i`.

</details>

---

## 🧩 Exercice 35

Afficher `"Bonjour Chat"` 3 fois.

<details>
<summary>💡 Corrigé et explication</summary>

```python
for animal in range(3):
    print("Bonjour Chat")
```

🧠 **Explication**

* `range(3)` répète la boucle 3 fois.
* On utilise un nom de variable amusant (`animal`) même si on ne l’utilise pas dans le corps de la boucle.

</details>

---

## 🧩 Exercice 36

Afficher les couleurs de la liste `["Rouge", "Vert", "Bleu"]`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
couleurs = ["Rouge", "Vert", "Bleu"]
for couleur in couleurs:
    print(couleur)
```

🧠 **Explication**

* On parcourt une **liste** avec `for`.
* Chaque élément est stocké dans `couleur` et affiché.

</details>

---

## 🧩 Exercice 37

Afficher les animaux d’une liste en ajoutant `" est mignon !"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
animaux = ["Chat", "Chien", "Lapin"]
for animal in animaux:
    print(animal, "est mignon !")
```

🧠 **Explication**

* On concatène une chaîne à chaque élément de la liste.
* Le nom de variable `animal` correspond au contenu de la liste.

</details>

---

## 🧩 Exercice 38

Afficher les nombres de 1 à 5 en les remplaçant par des fruits pour le compteur.

<details>
<summary>💡 Corrigé et explication</summary>

```python
fruits = ["Pomme", "Banane", "Cerise", "Mangue", "Kiwi"]
for fruit in fruits:
    print(fruit)
```

🧠 **Explication**

* On utilise une liste de fruits pour remplacer un compteur classique.
* La boucle parcourt la liste et affiche chaque fruit.

</details>

---

## 🧩 Exercice 39

Afficher `"Coloriage <couleur>"` pour chaque couleur de la liste.

<details>
<summary>💡 Corrigé et explication</summary>

```python
couleurs = ["Rouge", "Jaune", "Bleu", "Vert"]
for couleur in couleurs:
    print("Coloriage", couleur)
```

🧠 **Explication**

* On combine une chaîne fixe `"Coloriage"` avec chaque couleur de la liste.
* `couleur` est un nom de variable rigolo et parlant.

</details>

---

## 🧩 Exercice 40

Afficher `"Bonjour <animal> !"`, pour chaque animal rigolo dans la liste `["Licorne", "Dragon", "Panda"]`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
animaux_rigolos = ["Licorne", "Dragon", "Panda"]
for animal in animaux_rigolos:
    print("Bonjour", animal, "!")
```

🧠 **Explication**

* On utilise une liste avec des noms d’animaux amusants.
* La boucle `for` parcourt la liste et affiche un message pour chaque animal.

</details>

---

## 🧩 Exercice 41

Demander un nombre à l’utilisateur et afficher `"Nombre valide"` si le nombre est **positif ET pair**.

<details>
<summary>💡 Corrigé et explication</summary>

```python
nombre = int(input("Entrez un nombre : "))

if nombre > 0 and nombre % 2 == 0:
    print("Nombre valide")
else:
    print("Nombre non valide")
```

🧠 **Explication**

* `and` exige que **les deux conditions soient vraies** : positif **et** pair.
* Sinon, le nombre n’est pas valide.

</details>

---

## 🧩 Exercice 42

Demander un mot à l’utilisateur et afficher `"Mot intéressant"` si le mot est `"Python"` **ou** `"ChatGPT"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
mot = input("Entrez un mot : ")

if mot == "Python" or mot == "ChatGPT":
    print("Mot intéressant")
else:
    print("Mot banal")
```

🧠 **Explication**

* `or` suffit qu’une des deux conditions soit vraie pour que la condition entière soit vraie.

</details>

---

## 🧩 Exercice 43

Afficher les nombres de 1 à 20 et indiquer `"OK"` si le nombre est **multiple de 2 ET inférieur à 10**.

<details>
<summary>💡 Corrigé et explication</summary>

```python
for i in range(1, 21):
    if i % 2 == 0 and i < 10:
        print(i, "OK")
```

🧠 **Explication**

* `and` vérifie les deux conditions simultanément.
* Seuls les nombres pairs **et** <10 sont affichés.

</details>

---

## 🧩 Exercice 44

Afficher les nombres de 1 à 15 et indiquer `"Choisi"` si le nombre est **3 ou 7**.

<details>
<summary>💡 Corrigé et explication</summary>

```python
for i in range(1, 16):
    if i == 3 or i == 7:
        print(i, "Choisi")
```

🧠 **Explication**

* `or` permet de tester plusieurs valeurs possibles.
* Seuls 3 et 7 déclenchent l’affichage.

</details>

---

## 🧩 Exercice 45

Demander l’âge d’une personne et afficher `"Accès autorisé"` si l’âge est **entre 18 et 30 inclus** ou si la personne est `"VIP"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
age = int(input("Entrez votre âge : "))
statut = input("Statut : ")

if (age >= 18 and age <= 30) or statut == "VIP":
    print("Accès autorisé")
else:
    print("Accès refusé")
```

🧠 **Explication**

* Les parenthèses sont importantes pour prioriser les conditions.
* L’accès est autorisé si **l’âge est dans l’intervalle** ou si la personne est **VIP**.

</details>

---

## 🧩 Exercice 46

Générer un nombre aléatoire entre 1 et 10 et demander à l’utilisateur de deviner jusqu’à ce qu’il trouve.

<details>
<summary>💡 Corrigé et explication</summary>

```python
import random

rose = random.randint(1, 10)  # nombre aléatoire entre 1 et 10
guess = 0

while guess != rose:
    guess = int(input("Devinez le nombre : "))
    if guess < rose:
        print("Trop petit")
    elif guess > rose:
        print("Trop grand")
    else:
        print("Bravo, vous avez trouvé !")
```

🧠 **Explication**

* `random.randint(a, b)` génère un nombre aléatoire entre `a` et `b`.
* La boucle continue jusqu’à ce que l’utilisateur trouve le nombre.
* Les conditions donnent des indices à l’utilisateur.

</details>

---

## 🧩 Exercice 47

Générer 5 nombres aléatoires entre 1 et 20 et afficher ceux qui sont **pairs**.

<details>
<summary>💡 Corrigé et explication</summary>

```python
import random

voiture = []
for i in range(5):
    voiture.append(random.randint(1, 20))

for n in voiture:
    if n % 2 == 0:
        print(n, "est pair")
```

🧠 **Explication**

* On stocke 5 nombres aléatoires dans une liste.
* La boucle parcourt la liste et affiche les nombres pairs grâce à `n % 2 == 0`.

</details>

---

## 🧩 Exercice 48

Simuler le lancer d’un dé jusqu’à obtenir un 6 et afficher chaque lancer.

<details>
<summary>💡 Corrigé et explication</summary>

```python
import random

tournesol = 0

while tournesol != 6:
    tournesol = random.randint(1, 6)
    print("Lancé :", tournesol)
```

🧠 **Explication**

* `random.randint(1,6)` simule un dé à 6 faces.
* La boucle continue jusqu’à ce que le résultat soit 6.

</details>

---

## 🧩 Exercice 49

Générer un nombre aléatoire entre 1 et 50 et afficher si c’est **petit (≤10)**, **moyen (11-30)** ou **grand (>30)**.

<details>
<summary>💡 Corrigé et explication</summary>

```python
import random

bleu = random.randint(1, 50)

if bleu <= 10:
    print(bleu, "est petit")
elif bleu <= 30:
    print(bleu, "est moyen")
else:
    print(bleu, "est grand")
```

🧠 **Explication**

* La condition classe le nombre aléatoire en 3 catégories.
* `elif` permet de tester plusieurs intervalles.

</details>

---

## 🧩 Exercice 50

Créer une liste de 10 nombres aléatoires entre 1 et 100 et afficher **ceux multiples de 5 OU supérieurs à 90**.

<details>
<summary>💡 Corrigé et explication</summary>

```python
import random

voiture = [random.randint(1, 100) for _ in range(10)]

for n in voiture:
    if n % 5 == 0 or n > 90:
        print(n)
```

🧠 **Explication**

* Liste créée avec une **list comprehension**.
* `or` permet de tester deux conditions : multiple de 5 ou supérieur à 90.
* La boucle `for` parcourt la liste pour afficher les nombres correspondant aux critères.

</details>

---


