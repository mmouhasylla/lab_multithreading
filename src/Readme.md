## Introduction

Ce framework, développé en Python et C++, vise à gérer efficacement les tâches distribuées en utilisant des techniques de traitement parallèle. Il utilise une architecture Master-Slave où le Master attribue des tâches aux nœuds Slave pour exécution. En utilisant la bibliothèque de multiprocessing de Python, il permet le traitement de tâches concurrentes, simplifiant ainsi la distribution du travail sur plusieurs processeurs.

## Fonctionnalités Principales

- **Structure Master-Slave :** Conçue pour distribuer efficacement les tâches dans des environnements informatiques parallèles.
- **Traitement Parallèle :** Utilise les capacités de multiprocessing de Python pour l'exécution concurrente des tâches.
- **Gestion des Tâches :** Fournit des classes pour l'allocation des tâches, l'agrégation des résultats et la communication entre les nœuds.
- **Code Exemple :** Comprend des exemples illustrant la fonctionnalité des composants Master, Slave et Task.

## Instructions d'Installation

### Prérequis

- Python 3.x

### Procédure d'Installation

Pour activer l'environnement situé dans le répertoire racine du projet :

```bash
source .venv
```

#### Etape manquante
L'executable genere lors de la troisième de TP ne fonctionne pas. Il a été généré avec gcc Apple clang version 15.0.0.
Toutes les autres fonctionnalités du TP sont opérationels, a part celle en lien avec le cpp.
