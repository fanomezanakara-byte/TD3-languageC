#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main ()
  /* VARIABLE
        var T[n]:entrier;
        var n,i: entier;
        var S : entier;
        var moyenne : entier;
        var proche : entier;
        var plus_proche : entier ;
     DEBUT
        AFFICHER("veuiller ecrire la taille du tableau ");
        LIRE(n);
        SI(n<1) ALORS
        AFFICHER("erreur taille invalide");
        SINON
        POUR(i=0;i<n) FAIRE
        AFFICHER("veuiller ecrire le nombre dans la case N°",i+1 , "du ttableau");
        LIRE(T[i]);
        FINPOUR
        S=0;
        POUR(i=0;i<n) FAIRE
        S=S+T[i];
        i=i+1;
        FINPOUR
        moyenne=S/n;
        AFFICHER("la moyenne est ",moyenne);
        plus_proche=fabs(moyenne-T[0]);
        POUR(i=0;i<n)FAIRE
        proche=fabs(moyenne-T[i]);
        SI(plus_proche<=proche) ALORS
        plus_proche=T[i];
        FINSI
        FINPOUR
        AFFICHER("la note la plus proche de la moyenne est ",plus_proche);
    FIN
  */
{
  int n,i,S,plus_proche;
  float moyenne;
    printf("veuiller ecrire la taille du tableau : ");
    scanf("%d",&n);
    int T[n];
    if(n<1){
    printf("\nerreur taille invalide\n");
    }
    else{
    for(i=0;i<n;i++){
    printf("\nveuiller ecrire le nombre dans la case N°%d du tableau : ",i+1);
    scanf("%d",&T[i]);
    }
    S=0;
    for(i=0;i<n;i++){
    S=S+T[i];
    }
    moyenne=(S/n);
    printf("\nla moyenne est %.2f : ",moyenne);
    plus_proche=T[0];
    for(i=0;i<n;i++){
      if(fabs(T[i] - moyenne) <= fabs(plus_proche - moyenne)){
        plus_proche=T[i];
      }
    }
    printf("la note la plus proche de la moyenne est : %d ",plus_proche);
    printf("\n");
    }
    return (0);
 }
    
    
    
    
    
    
        
        
