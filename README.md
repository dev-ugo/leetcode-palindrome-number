# Palindrome Number - Solution en C

Ce dépôt contient une solution au problème **Palindrome Number** en C, où l'objectif est de vérifier si un entier donné est un palindrome.

## Description du problème

Étant donné un entier `x`, il faut retourner **true** si `x` est un palindrome et **false** autrement.

Un nombre est un palindrome s'il peut être lu de la même manière de gauche à droite et de droite à gauche.

### Exemple

#### Entrée

```text
x = 121
```

### Sortie

```text
true
```

### Explications

- 121 est un palindrome, car il se lit de la même manière de gauche à droite et de droite à gauche.

## Solution proposée

### Approche

- Vérifier d'abord si le nombre est négatif, car les nombres négatifs ne peuvent pas être des palindromes.
- Inverser le nombre tout en évitant un dépassement de capacité.
- Comparer l'inversé avec l'original pour déterminer si le nombre est un palindrome.

## Exemples d'utilisation

### Exemple 1

```text
Entrée : x = 121
Sortie : true
```

### Exemple 2

```text
Entrée : x = -121
Sortie : false
```

### Exemple 3

```text
Entrée : x = 10
Sortie : false
```

## Ressources

[Problème Two Sum sur LeetCode](https://leetcode.com/problems/palindrome-number)

## Suivi de progression

Ce dépôt fait partie de ma progression personnelle dans l'apprentissage des algorithmes et des structures de données. N'hésitez pas à me laisser des commentaires ou des suggestions !