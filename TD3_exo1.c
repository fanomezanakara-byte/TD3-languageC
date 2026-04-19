#include<stdio.h>
int main ()
 /* VARIABLE
      var T[n]: entier;
      var n : entier ;
      var i : entier;
      var TP[n]: entier;
      var M : entier;
      var k : entier;
      var TI[n]: entuier;
    DEBUT
      AFFICHER("veuiller ecrire la taille du tableau : " );
      LIRE(n);
      SI (n<1) FAIRE
      AFFICHER("erreur veuiller ecrire une taille superieur à 1 ");
      FINSI
     SINON
     POUR(i=0;i<n) FAIRE
     AFFICHER ("veuiller entrer un nombre dans las case N°",i+1);
     LIRE(T[i]);
     FINPOUR
     k=0;
     POUR(i=0;i<n) FAIRE
      SI(T[i]%2==0) ALORS
      TP[k]=T[i];
      k=K+1;
      FINSI
      SINON
      TI[M]=T[i];
      M=M+1;
      FINSINON
      POUR(i=0;i<n) FAIRE
      TP[k+i]=TI[i];
      FINPOUR
      POUR(i=0;i<n) FAIRE
      AFFICHER(" le nouveau tableau est " , TP[i]);
      FINPOUR
  FIN
  */
{
  int n,i,M,k;
  printf("veuiller ecrire la taille du tableau : " );
  scanf("%d",&n);
  int T[n];
  int TP[n];
  int TI [n];
  if (n<1){
  printf("\nerreur veuiller ecrire une taille superieur à 1 \n ");
  }
  else{
  for (i=0;i<n;i++){
  printf("\nveuiller entrer un nombre dans las case N°%d du tableau : ",i+1);
  scanf("%d",&T[i]);
  }
  k=0;
  for(i=0;i<n;i++){
    if (T[i]%2==0){
    TP[k]=T[i];
    k=k+1;
    }
    else{
    TI[M]=T[i];
    M=M+1;
    }
  }
  M=0;
  for(i=0;i<n;i++){
  TP[k+i]=TI[i];
  }
  for(i=0;i<n;i++){
   printf("%d",TP[i]);
   printf("\n");
  }
  }
   return (0);
}
  
  
  
  
      
      
      
      
      
      
