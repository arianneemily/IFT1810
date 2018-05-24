/*Arianne Deschênes*/	
/*But du programme: Ce programme converti les données de santé des patients*/	
#include <stdio.h>  
int main ()
{
/*déclaration*/
int poidsLb;
float poidsKg;
float tempF;
float tempC;
char status;
int nbPats;
char continuer;
const int farenheit = 5/9;

/*traitement*/
do
{
printf ("Entrez votre poids en livres\n");
scanf(" %d", &poidsLb);
poidsKg = poidsLb * 0.454;
printf("Votre poids en kilogrames est de %f\n", poidsKg);

printf ("Entrez votre temperature en degres Farenheit\n");
scanf(" %f", &tempF);
tempC = (tempF - 32) * farenheit; 
printf("Votre temperature en celsius est de %f\n", tempC);

printf ("Entrez votre status civil (C pour celibataire, M pour marie, D pour divorce, S pour separe ou A pour autre)\n");
scanf(" %c", &status);
switch(status)
{
	case 'c':
	case 'C': 
		printf("Celibataire\n");
		break;
	case 'm':
	case 'M': 
		printf("Marie\n");
		break;
	case 'd':
	case 'D': 
		printf("Divorce\n");
		break;
	case 's':
	case 'S': 
		printf("Separe\n");
		break;
	case 'a':
	case 'A': 
		printf("Autre\n");
		break;
}

nbPats++;

printf ("Voulez-vous entrer un autre patient (O ou N)?\n");
scanf (" %c", &continuer);
} while (continuer == 'O' || continuer == 'o');

printf ("%d patients ont etes traites", nbPats);
return 0;
}


