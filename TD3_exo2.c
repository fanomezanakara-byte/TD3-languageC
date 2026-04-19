#include<stdio.h>
int main ()
    /* VARIABLE
        var T[n]: entier;
        var n : entier;
        var i : entier;
        var k : entier;
        var j : entier;
        var tmp : entier;
        var z : entier;
        var C : entier;
      DEBUT
         AFFICHER("veuiller ecrire la taille du tableau ");
         LIRE(n);
         SI(n<1) ALORS
         AFFICHER("erreur veuiller choisir une nombre superieur à 1 ");
         FINSI
         SINON
         POUR(i=0;i<n) FAIRE 
         AFFICHER (" veuiller ecrire le nombre dans la case N° ", i+1,"du tableau");
         LIRE(T[i]);
         FINPOUR
         AFFICHER(" vous vouler que le programme le tri  par ordre  croissant ou decroissant ? " );
         AFFICHER (" si c'est en  ordre croissant veuiller entrer : 1    , si c'est en ordre decroissant veuiller enter : 2 " );
         LIRE(k);
         AFFICHER ("veuiller enter ici le nombre a inserer ca doit etre un entier ");
         LIRE(z);
         SI (k<1 ou k>2) ALORS 
         AFFICHER(" erreur veuiller bien lire les instructions et tout recommencer  ");
         SINONSI (k==1) ALORS
         POUR(i=0;i<n-1) FAIRE
          POUR(j=i+1;j<n) FAIRE
          SI(T[i]>=T[j]) ALORS
          tmp=T[i];
          T[i]=T[j];
          T[j]=tmp;
          FINSI
          FINPOUR
        FINPOUR
        C=0;
        TANTQUE (C<n et T[C]<=z) FAIRE
        C=C+1;
        FINTANTQUE
        POUR(i=n;i>C) FAIRE
        T[i]=T[i-1];
        FINPOUR
        T[C]=z;
        n=n+1;
        AFFICHER("le tableau apres insertion est ");
        POUR(i=0;i<n) FAIRE
        AFFICHER( T[i]);
        FINPOUR
        SINONSI (k==2) ALORS
        POUR(i=0;i<n-1) FAIRE
          POUR(j=i+1;j<n) FAIRE
          SI(T[i]<=T[j]) ALORS
          tmp=T[i];
          T[i]=T[j];
          T[j]=tmp;
          FINSI
          FINPOUR
        FINPOUR
        C=0;
        TANTQUE (C<n et T[C]>=z) FAIRE
        C=C+1;
        FINTANTQUE
        POUR(i=n;i>C) FAIRE
        T[i]=T[i-1];
        FINPOUR
        T[C]=z;
        n=n+1;
        AFFICHER("le tableau apres insertion est ");
        POUR(i=0;i<n) FAIRE
        AFFICHER( T[i]);
        FINPOUR
        FINSI
        FINSINON
     FIN
  */
{   
    int n,i,k,z,j,tmp,c;
    printf("veuiller ecrire la taille du tableau  : ");
    scanf("%d",&n);
    int T[n];
    if (n<1){
    printf("\nerreur veuiller choisir une nombre superieur à 1\n");
    }
    else{
    for (i=0;i<n;i++){
    printf("\nveuiller  ecrire le nombre dans la case N°%d du tableau : " ,i+1);
    scanf("%d",&T[i]);
    }
    printf(" \nvous vouler que le programme le tri  par ordre  croissant ou decroissant ? " );
    printf(" \nsi vous vouller  le trier par ordre croissant veuiller entrer : 1    , si c'est en ordre decroissant veuiller enter : 2  : " );
    scanf ("%d",&k);
    printf("veuiller enter ici le nombre a inserer dans le tableau  ca doit etre un entier : ");
    scanf("%d",&z);
    if (k<1 || k>2){
    printf(" erreur veuiller bien lire les instructions et tout recommencer\n  ");
    }
    else if (k==1){
     for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
          if(T[i]>=T[j]){
          tmp=T[i];
          T[i]=T[j];
          T[j]=tmp;
          }
        }
      }
      c=0;
      while(c<n && T[c]<=z){
      c=c+1;
      }
      for(i=n;i>c;i--){
      T[i]=T[i-1];
      }
      T[c]=z;
      n=n+1;
      printf("le tableau apres insertion est ");
      for (i=0;i<n;i++){
      printf("%d", T[i]);
      }
         printf("\n");
    }
    else if (k==2){
      for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
          if(T[i]<=T[j]){
          tmp=T[i];
          T[i]=T[j];
          T[j]=tmp;
          }
        }
      }
       c=0;
      while(c<n && T[c]>=z){
      c=c+1;
      }
      for(i=n;i>c;i--){
      T[i]=T[i-1];
      }
      T[c]=z;
      n=n+1;
      printf("le tableau apres insertion est ");
      for (i=0;i<n;i++){
      printf("%d", T[i]);
      }
      printf("\n");
    }
  }
    return (0);
}

    
      
    

        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
         
         
         
         
