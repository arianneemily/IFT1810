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
int nbProg 
int nbAnal 
int nbOper
int nbInde
int nbEmp

/*traitement*/
do 
{
printf ("Entrez une des lettres suivantes pour identifier votre poste:\nP pour programmeur\nA pour analyste\nO pour operateur\nI pour indetermine\nEntrez egalement votre salaire hebdomadaire:\n"); 
scanf ("%c%f", &Poste, &salHeb); 

switch(poste)
{
	case 'P':
	case 'p': 
	++nbProg;
		printf("Cette personne est un Programmeur remuneree %f par semaine. \n") ,salPro;
		break;
	case 'A':
	case 'a': 
	++nbAnal;
		printf("Cette personne est un Analyste remuneree %f par semaine. \n") ,salAna;
		break;
	case 'O':
	case 'o':
	++nbOper; 
		printf("Cette personne est un Operateur remuneree %f par semaine. \n"), salHeb;
		break;
	case 'I':
	case 'i': 
	++nbInde;
		printf("Cette personne est un Indetermine remuneree %f par semaine. \n") salHeb;
		break;
}
printf ("Voulez-vous entrer un autre employe (O ou N)?\n");
scanf (" %c", &continuer);
} while (continuer == 'O' || continuer == 'o');



printf ("Le salaire moyen des programmeurs est de %f\n", somnbProf /  ); 
printf ("Le salaire minimum d'un operateur est de %f\n", salMin); 

return 0; 
}

}
