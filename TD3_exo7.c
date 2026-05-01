#include<stdio.h>

int main ()
{
  char texte[500] = {0}; 
  int a = 0;
  int b = 0;
  int i = 0;

  printf("veuiller sasir un texte se terminant pat un point . : " );
  scanf(" %[^\n]", texte);

  while (texte[i] != '\0') {
      i++;
  }

  if ( i == 0 || texte[i - 1] != '.') {
      printf("Erreur : Le texte doit se terminer par un point.\n");
  } else {
      int j = 0;
      while (texte[j] != '\0') {
          if (texte[j] == 'a') {
              a++;
          }
          if (texte[j] == 'e' && texte[j+1] == 's') {
              b++;
          }
          j++;
      }
      printf("\nresultat :\n");
      printf("nombre de a : %d \n", a);
      printf("nombre de es : %d \n", b);
  }
  
  return 0;
}
