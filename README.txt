Auteur									: Etienne LANDURE
Classe 									: S6P-B
Email									: e4landur@enib.fr
Tel 									: 06 05 12 07 12
Langage 							  	: C++ 11
Bibliothèque pour la partie graphique 	: SFML 2.1
Version 								: 0.42


Dans ce README vous trouverez les informations essentielles au bon fonctionnement de ce programme. 

Tout d'abord, afin de bien commencer je vous propose de faire un "make clean" dans votre terminal afin de 
supprimer l'exécutable (si il est déjà présent). A présent vous pouvez faire un "make" dans votre terminal. 
Si aucune erreur n'apparaît c'est que le programme a bien compilé et que nous avons pu créer un fichier 
exécutable. Si ce n'est pas le cas, alors le problème risque de venir de SFML. Cependant, vous aurez 
(normalement) aucun souci à compiler ce programme.

Lorsque la compilation est terminée et que le fichier exécutable est créé, vous pouvez lancer l'application 
de deux manières:
	- en faisant "make run" dans votre terminal
	- en tapant "./Appli" dans votre terminal
	
Ces deux manières permettent de lancer le programme. Lorsque celui-ci est lancé, vous arrivé sur deux choix: 
"Lancer le jeu" ou "Quitter".

"Lancer le jeu" va permettre de lancer le jeu et "Quitter" vous permettra de fermer le programme. 

Mais attardons nous sur le premier choix: "Lancer le jeu". Celui-ci va lancer une "partie" de 
notre Pong en créeant un espace de jeu - l'espace de jeu est géré par les murs: en effet ceux-ci permettent 
de poser les limites - pour les cercles et les triangles, ceux-ci étant créés aléatoirement: leur nombre 
allant aléatoirement entre 0 et 50 et leur position étant aussi aléatoire.

Si vous souhaitez changer la couleur d'une forme (mur, cercle ou triangle) faites un clic droit ou gauche 
sur la forme souhaitée. Une fenêtre apparaît vous permettant de changer les taux de rouge, vert et bleu. 
Afin de changer le taux que vous souhaitez, cliquez sur le rectangle associé et tapez au clavier (*) la 
valeur voulue (entre 0 et 255). Afin de confirmer votre choix cliquez sur la petite croix en haut de la 
fenêtre, celle-ci va fermer la fenêtre et remettre votre partie en cours. Vous pouvez supprimer la valeur en 
appuyant sur la touche "Backspace" (chaque appui enlèvera une unité à la valeur de la couleur).

Une dernière astuce: si vous souhaitez mettre votre partie en pause, appuyez sur la touche "echap" de votre 
clavier: ceci mettra le jeu en pause! Si vous souhaitez remettre le jeu en marche, ré-appuyez une nouvelle 
fois sur la touche "echap".

Et voilà, vous êtes dès à présent prêt à utiliser ce jeu de Pong. En espérant que celui-ci vous plaise et 
qu'il me vaille une belle note.


(*) : un léger bug d'affichage rend illisible les valeurs de rouge, vert et bleu. Afin que vous puissiez 
malgré tout voir la valeur de chaque couleur, vous pouvez cliquer sur le rectangle correspondant et la 
valeur de la couleur sera affichée dans votre terminal.
