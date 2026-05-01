#include<stdio.h>
char mot[50];
char w[50];
char U[50];
int i,c,p,k,z,j;
void affichage()
{
  printf("veuiller sasiir un mot : ");
  scanf("%s",mot);
}
void resultat()
{
  c=0;
  i=0;
  while(mot[i] != '\0')
  {
    c++;
    i++;
  }
  if (c%2 != 0)
  {
   printf(" ce n'est pas un carrer \n");
  }
  else if (c%2 == 0)
  {
  p=0;
  for(i=0;i<c/2;i++)
  {
    w[p] = mot[i];
    p++;
  }
  k=0;
  for (i=(c/2);i<c;i++)
  {
    U[k] = mot[i];
    k++;
  }
  z=0;
  for (i=0;i<c/2;i++ )
  {
      if (w[i] != U[i])
      {
      z=z+1;
      }
  }
  if (z == 0)
  {
    printf("c'est un carrer\n ");
  }
  else if ( z != 0 )
  {
    printf("ce n'est pas un carrer \n");
  }
 }
}
int main ()
{
  affichage();
  resultat();
  return (0);
}


