# Entrée / Sortie

Entrées :

- Distance robot-objet (`dx`, `dy`)
- Vitesse du robot sur route et terrain rocheux (`v_rt` ,`v_rx` )
- La longeur `l1` du premier segment de la route

Sortie :

- temps de trajet `t`

# Sous-problèmes

une seul inconnu manque, la longueur `l2` qui représente le segment sur le terrain rocheux. Pour l’obtenir il faut soustaire la distance `dy` avec L1 et appliquer ensuite le théorème du triangle rectangle avec `dx` .

Soit le calcul suivant:

$$  
L2 = \sqrt{(dy-L1)^2 + dx^2}  
$$

Une fois `l2` trouvé on peut trouver le temps `t` total en divisant `l2` par `v_rt` , puis en divisant `l2` par `v_rx` et faire la somme des deux résultats.

Soit le calcul suivant:

$$  
t = L_1/v_{rt} + L_2/v_{rx}  
$$

# Pseudo-Code

```cpp
incription >> dx,dy et l_1
l_2 = racincarre((dy-l_1)^2 + (dx,2)^2)
inscription v_rt ,v_rx
t = (l_1/v_rt) + (v_rx)
afficher t 

```
