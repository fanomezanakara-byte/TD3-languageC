#include<stdio.h>
int main ()
    /*VARIABLE
        var T[n]: entier;
        var n : entier;
        var i : entier;
        var pos : entier;
      DEBUT
       AFFICHER (" veuiller saisir la taille du tableau ");
       LIRE(n);
       SI (n<1) ALORS
       AFFICHER("erreur veuiller choisir une taille superieur à 1 ");
       FINSI
       SINON
       POUR(i=0;i<n) FAIRE
       AFFICHER ("veuiller ecrire le nombre dans la case N°",i+1 du tableau " );
       LIRE(T[i]);
       FINPOUR
       AFFICHER("veuiller sasir le N° de la cases a effacer ");
       LIRE(pos);
       SI(pos<1 ou pos >n) ALORS
       AFFICHER("erreur veuiller choisir un nombre valable dans le tableau ");
       SINON SI ( pos >=1 ou pos<=n) ALORS
       POUR(i=pos-1;i<n-1) FAIRE
       T[i]=T[i+1];
       i=i+1;
       FINPOUR
       n=n-1;
       AFFICHER("le tableau apres suppression d'un elements est ");
       POUR(i=0;i<n-1) FAIRE
       AFFICHER(T[i]);
       FINPOUR
       FINSINON
    FIN
   */
 {
   int n,i,pos;
   printf("veuiller saisir la taille du tableau : ");
   scanf("%d",&n);
   int T[n];
   if(n<1){
   printf("\nerreur veuiller choisir une taille superieur à 1\n");
   }
   else{
   for (i=0;i<n;i++){
   printf("\nveuiller ecrire le nombre dans la case N°%d du tableau : ",i+1 );
   scanf("%d",&T[i]);
   }
   printf("\nveuiller sasir le N° de la cases a effacer  : ");
   scanf("%d",&pos);
   if(pos<1 || pos >n){
   printf("erreur veuiller choisir un nombre valable dans le tableau\n");
   }
   else if( pos >=1 || pos<=n){
   for(i=pos-1;i<n-1;i++){
    T[i]=T[i+1];
    }
    n--;
    printf("le tableau apres suppression d'un elements est : ");
    for(i=0;i<n;i++){
    printf("%d",T[i]);
    }
    printf("\n");
    }
   }
    return (0);
 }
   
       
       
       
       
