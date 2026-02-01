# 📦 push_swap

## 🧠 Description

**push_swap** est un projet d'algorithmie visant à trier une pile d'entiers à l'aide de deux piles et un nombre limité d'opérations. Le programme doit trouver la meilleure manière de trier la pile `a` dans l'ordre croissant en affichant la suite d'instructions correspondantes.

Le but est de trier la pile avec le moins d'opérations possible tout en respectant les contraintes du projet.

---

## 📋 Règles du projet

Le programme doit respecter les opérations suivantes :

- Deux piles :
  - **stack A** : contient les éléments à trier
  - **stack B** : pile vide au départ
- Seules les opérations suivantes sont autorisées pour manipuler les piles :
  - `sa` : swap les deux premiers éléments de A
  - `sb` : swap les deux premiers éléments de B
  - `ss` : `sa` et `sb` en même temps
  - `pa` : push le premier élément de B vers A
  - `pb` : push le premier élément de A vers B
  - `ra` : rotate A (le premier devient dernier)
  - `rb` : rotate B
  - `rr` : `ra` et `rb` en même temps
  - `rra` : reverse rotate A
  - `rrb` : reverse rotate B
  - `rrr` : `rra` et `rrb` en même temps

Le programme doit être capable de trier une pile de tailles variées en optimisant les opérations.

---

## 🏗️ Compilation

Pour compiler le programme, exécute la commande suivante :

```bash
make
