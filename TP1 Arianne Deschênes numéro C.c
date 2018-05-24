/*Arianne Deschenes*/	
/*But du programme: Faire la collecte de donnees sur les employes et fournir de l'information sur les salaires'*/	
#include <stdio.h>  
int main ()
{
/*déclaration*/
float salMoy
float salMin
float salHeb
char Poste 


/*traitement*/
printf ("Entrez une des lettres suivantes pour identifier votre poste:\nP pour programmeur\nA pour analyste\nO pour operateur\nI pour indetermine\nEntrez egalement votre salaire hebdomadaire:\n"); 
scanf ("%c%f", &Poste, &salHeb); 
switch(poste)
{
	case 'P':
	case 'p': 
		printf("Programmeur\n");
		break;
	case 'A':
	case 'a': 
		printf("Analyste\n");
		break;
	case 'O':
	case 'o': 
		printf("Operateur\n");
		break;
	case 'I':
	case 'i': 
		printf("Indetermine\n");
		break;
}
&salHeb = 




printf ("Il s'agit d'un &''\n", salMoy); 

printf ("Le salaire moyen des programmeurs est de %f\n", salMoy); 
printf ("Le salaire minimum d'un operateur est de %f\n", salMin); 
}
