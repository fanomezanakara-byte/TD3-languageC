
/* VARIABLE
    var mot[50]: caractere;
    var i : entier;
    var c : entier;
    var palindrome ;
  DEBUT
    AFFICHER("veuiller ecrire le mot a savoir s'il est palindrome ou pas : ", mot);
    LIRE(mot);
    i=0;
    c=0;
    TANTQUE (mot[i]!= '\0') FAIRE
    c=c+1;
    FINTANQUE
    POUR(i=0;i<c-2) FAIRE
      SI(mot[i]=mot[c-i-1) FAIRE]
      plaindrome=1;
      SINON
      palindrome=0;
      FINSI
   FINPOUR
   SI(palindrome=1)ALORS
   AFFICHER("le mot est palindrome");
   SINON SI (palindrome=0) ALORS
   AFFICHER("le mot n'est pas palindrome");
  */
#include<stdio.h>
int main ()
{
 int i,c,palindrome=0;
 char mot[100];
 printf("veuiller ecrire un mot  : ");
 scanf("%s",mot);
 i=0;
 c=0;
 while (mot[i] != '\0'){
 c=c+1;
 i++;
 }
 for(i=0;i<=(c/2);i++){ 
  if(mot[i]!=mot[c-1-i]){
  palindrome=palindrome+1;
  }
  
 }
 if (palindrome==0){
 printf("le mot est palindrome\n");
 }
 else {
 printf("le mot n'est pas palindrome\n");
 }
 
 return (0);
}
 
 
 
 
    


