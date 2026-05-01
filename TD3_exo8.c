#include<stdio.h>
char texte[500];
char bi[50];
int i,j,c,w,k;
void affichage ()
{
  printf("1-)veuiller sasir votre texte  : " );
  scanf("%[^\n]",texte);
}
void resultat ()
{
 i=0;
  while (texte[i] != '\0')
  {
    i++;
  }
  if (i==0)
  {
    printf("erreur veuiller ecrire votre mot ou texte\n");
  }
  else if (i !=0);
  {
    printf("2-)veuiller ecrire le bigramme dont vous vouler savoir le nombre ex : es ou an ,... : " );
    scanf("%s",bi);
    k=0;
    w=0;
    while(bi[k] != '\0')
    {
      w++;
      k++;
    }
    if ( w > 2 || w <= 1 )
    {
      printf("erreur un bigramme est la suite de 2 lettres\n ");
    }
    else if (w == 2)
    {
       c=0;
       j=0;
      while (texte[j] != '\0')
      {
        if ( texte[j] == bi[0] && texte[j+1] == bi[1] )
        {
          c++;
        }
          j++;
      }
        printf("\nle nombre de bigramme de : %s est : %d\n",bi,c);
    }
  }
}
int main ()
{
  affichage();
  resultat();
  return (0);
}
      
    
    
