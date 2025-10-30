# Push_swap

Projet algorithmique de l'école 42 : trier une pile d'entiers avec le **minimum d'opérations**, en utilisant seulement un jeu d’instructions limité.  
L’objectif est d’analyser et d’optimiser la **complexité** des tris.

---

## 🎯 Objectifs du projet
- Manipulation de **structures de données** (stacks)
- Implémentation de **tri optimisé**
- Gestion des erreurs et allocations mémoires
- Performance : **minimiser** le nombre d’instructions générées

---

## 🧩 Règles du jeu

On dispose de :
- Deux stacks : **A** (entrée) et **B** (vide au départ)
- Des **entiers uniques** en argument du programme
- Une liste d’instructions autorisées :

| Opération | Description |
|----------|-------------|
| `sa` / `sb` | Swap les 2 premiers éléments |
| `ss` | `sa` + `sb` |
| `pa` / `pb` | Push d’une pile à l’autre |
| `ra` / `rb` | Rotate vers le haut |
| `rr` | `ra` + `rb` |
| `rra` / `rrb` | Reverse rotate |
| `rrr` | `rra` + `rrb` |

---

## ▶️ Utilisation

```sh
make
./push_swap 2 1 3 6 5 8
```

Exemple de sortie:
```sh
sa
pb
pb
pb
sa
pa
pa
pa
```

✅ Gestion des erreurs
Le programme affiche Error si :
-Non-entiers
-Valeurs hors int
-Doublons
-Aucun argument
