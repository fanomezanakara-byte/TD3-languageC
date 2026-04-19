#include<stdio.h>
 /* VARIABLE
      var T1[50]: entier;
      var T2[20]: entier;
      var N : entier;
      var m : entier;
      var i,j : entier;
      vqr k : entier;
    DEBUT
      AFFICHER("veuiller saisir la taille du tableau de T1 ");
      LIRE(N);
      AFFICHER("veuiller saisir la taille du tableau de T2 ");
      LIRE(m);
      SI(n<1 ou n>50 ou m<1 ou m>20) ALORS
      AFFICHER("erreur veuiller choisir pour la taille de T1 une nombre entre 1-50 et pour T2 une yaille entre 1-20");
      SINON
      POUR(i=0;i<N) FAIRE
      AFFICCHER("veuiller ecrire le nombre dans la case N°",i+1,"du tableau de T1");
      LIRE(T1[i]);
      FINPOUR
      POUR(i=0;i<m)FAIRE
      AFFICHER("veuiller ecrire le nombre dans la case N°",i+1,"du tableau de T2");
      LIRE(T2[i]);
      j=0;
      TANTQUE (j<N) FAIRE
        SI(T2[i]==T1[j])ALORS
          POUR(k=j;k<n-1) FAIRE
          T1[k]=T1[k+1];
          FINPOUR
          N=N-1;
        SINON
        j=j+1;
      FINTANQUE
      AFFICHER("le nouveau tableau apres la suppression de T2 dans T1 est ");
      POUR(i=0;i<N) FAIRE
      AFFICHER(T1[i]);
      FINPOUR
      FINSI
   FIN
  */
  int main ()
{ 
   int n,M,i,z,k,j=0;
   int w=0;
   printf("veuiller saisir la taille du tableau de T1  : " );
   scanf("%d",&n);
   printf("\nveuiller saisir la taille du tableau de T2 : ");
   scanf("%d",&M);
   int T1[n];
   int T2[M];
   if(n<1 || n>50 || M<1 || M>20){
   printf("erreur veuiller choisir pour la taille de T1 une nombre entre 1-50 et pour T2 une yaille entre 1-20\n");
   }
   else{
    for(i=0;i<n;i++){
    printf(" \n1-%d veuiller ecrire le nombre dans la case N°%d du tableau de T1 ",j+1,i+1);
    j++;
    scanf("%d",&T1[i]);
    }
    for(i=0;i<M;i++){
    printf("\n2-%d veuiller ecrire le nombre dans la case N°%d du tableau de T2 ",w+1,i+1);
    w++;
    scanf("%d",&T2[i]);
    }
    for (i = 0; i < M; i++) {
        z = 0;
        while (z < n) {
            if (T1[z] == T2[i]) {
                for (k = z; k < n - 1; k++) {
                    T1[k] = T1[k + 1];
                }
                n--; // Réduction de la taille de T1
            } else {
                z++;
            }
        }
    }
  
    printf("\nle nouveau tableau apres la suppression de T2 dans T1 est : ");
    for(i=0;i<n;i++){
    printf("%d", T1[i]);
    }
    printf("\n");
    }
    return (0);
 } 
    
   
   
   
   
      
