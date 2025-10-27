## 🧩 Exercice 1 – Jeu de devinette multiple

Créer un programme qui :

1. Génère un nombre aléatoire entre 1 et 50 (`secret`).
2. Demande à l’utilisateur de deviner le nombre.
3. Tant que l’utilisateur n’a pas trouvé **et qu’il a moins de 5 essais** :

   * Si le nombre est trop petit, afficher `"Plus grand !"`.
   * Si le nombre est trop grand, afficher `"Plus petit !"`.
4. Afficher un message final selon que l’utilisateur a trouvé ou non.

<details>
<summary>💡 Corrigé et explication</summary>

```python
import random

secret = random.randint(1, 50)
essais = 0
trouve = False

while essais < 5 and not trouve:
    nombre = int(input("Devinez le nombre : "))
    essais += 1
    if nombre < secret:
        print("Plus grand !")
    elif nombre > secret:
        print("Plus petit !")
    else:
        print("Bravo, vous avez trouvé !")
        trouve = True

if not trouve:
    print("Désolé, le nombre était :", secret)
```

🧠 **Explication**

* Combinaison **while** avec **condition logique** `essais < 5 and not trouve`.
* `if/elif/else` donne les indices selon la valeur.
* La variable `trouve` permet de sortir de la boucle si le nombre est trouvé avant les 5 essais.

</details>

---

## 🧩 Exercice 2 – Tableau de multiplication filtré

1. Créer une **fonction** `table_multiplication(n)` qui retourne la table de multiplication de `n` (de 1 à 10) sous forme de liste.
2. Demander un nombre à l’utilisateur et afficher uniquement les résultats **pairs** et **supérieurs à 10**.

<details>
<summary>💡 Corrigé et explication</summary>

```python
def table_multiplication(n):
    table = []
    for i in range(1, 11):
        table.append(n * i)
    return table

nombre = int(input("Entrez un nombre : "))
for valeur in table_multiplication(nombre):
    if valeur % 2 == 0 and valeur > 10:
        print(valeur)
```

🧠 **Explication**

* La fonction construit la table avec une **boucle `for`**.
* La boucle principale parcourt la table et **filtre les valeurs avec une condition complexe** (`valeur % 2 == 0 and valeur > 10`).

</details>

---

## 🧩 Exercice 3 – Liste aléatoire et statistiques

1. Générer une **liste de 10 nombres aléatoires** entre 1 et 100.
2. Parcourir la liste avec une boucle :

   * Si le nombre est **pair**, ajouter 1 à `compteur_pair`.
   * Sinon, ajouter 1 à `compteur_impair`.
   * Si le nombre est >50 **et pair**, ajouter à une liste `grand_pair`.
3. Afficher les trois résultats à la fin.

<details>
<summary>💡 Corrigé et explication</summary>

```python
import random

nombres = [random.randint(1, 100) for _ in range(10)]
compteur_pair = 0
compteur_impair = 0
grand_pair = []

for n in nombres:
    if n % 2 == 0:
        compteur_pair += 1
        if n > 50:
            grand_pair.append(n)
    else:
        compteur_impair += 1

print("Nombres pairs :", compteur_pair)
print("Nombres impairs :", compteur_impair)
print("Pairs >50 :", grand_pair)
```

🧠 **Explication**

* La **condition imbriquée** `if n > 50` à l’intérieur du test de parité montre une logique avancée.
* `append()` permet de construire une liste avec des critères précis.

</details>

---

## 🧩 Exercice 4 – Mot magique

1. Demander à l’utilisateur de saisir un mot.
2. Tant que le mot **n’a pas exactement 5 lettres** ou **ne commence pas par une voyelle**, redemander un mot.
3. Afficher `"Mot accepté : <mot>"`.

<details>
<summary>💡 Corrigé et explication</summary>

```python
voyelles = "AEIOUaeiou"
mot = ""

while len(mot) != 5 or mot[0] not in voyelles:
    mot = input("Entrez un mot de 5 lettres commençant par une voyelle : ")

print("Mot accepté :", mot)
```

🧠 **Explication**

* Combinaison de conditions **while** avec **OR logique**.
* La boucle continue jusqu’à ce que les deux conditions soient simultanément correctes (`len(mot) == 5` et première lettre dans voyelles).
* La logique oblige l’utilisateur à réfléchir à la saisie correcte.

</details>

---

## 🧩 Exercice 5 – Mini jeu de tirage

1. Créer une **liste de joueurs** : `["Alice", "Bob", "Charlie", "Dora"]`.
2. Chaque joueur tire un nombre aléatoire entre 1 et 6 (comme un dé).
3. Si un joueur obtient **6**, il gagne et la boucle s’arrête.
4. Afficher à chaque tour quel joueur a tiré quoi.
5. Si aucun joueur n’a tiré 6 après un tour complet, recommencer.

<details>
<summary>💡 Corrigé et explication</summary>

```python
import random

joueurs = ["Alice", "Bob", "Charlie", "Dora"]
gagnant = None

while gagnant is None:
    for joueur in joueurs:
        tirage = random.randint(1, 6)
        print(joueur, "a tiré", tirage)
        if tirage == 6:
            gagnant = joueur
            break

print("Le gagnant est :", gagnant)
```

🧠 **Explication**

* **Boucle `while` externe** pour répéter les tours.
* **Boucle `for` interne** parcourt chaque joueur.
* `break` permet de sortir immédiatement si un joueur obtient 6.
* Exemple parfait de **boucle dans condition et condition dans boucle**.

</details>

---
