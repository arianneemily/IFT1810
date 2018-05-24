/*Arianne Deschênes*/	
/*Ce programme calcule la prime totale annuelle attribuee aux employes d'une compagnie'*/	

#include <stdio.h>  
int main()
{
/*declaration*/	
	const float Prime = 0.0325; 
	int Surprime; 
	float Salaire; 
	int Anciennete; 
	float primeTotale; 
	
/*traitement*/	
	printf ("Veuillez entrer votre salaire annuel et le nombre d'annees d'anciennete que vous detenez");
	scanf("%f%d", &Salaire, &Anciennete);
	
  if (Anciennete < 3) 
  Surprime = 456;
    if (Anciennete > 3 && Anciennete <= 10   )
    Surprime = 765; 
      if (Anciennete > 10)
	  Surprime = 1230;
      	
primeTotale = Salaire * Prime + Surprime;
	
/*Affichage:*/
printf("Votre salaire actuel est de %f\n",Salaire);
printf("Vous detenez %d ans d'anciennete\n", Anciennete);
printf("Votre prime totale sera de %f\n", primeTotale);

return 0;
}
