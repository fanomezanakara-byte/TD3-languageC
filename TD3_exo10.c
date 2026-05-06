#include <stdio.h>

char texte[500];
int i, c, k, x;

void affichage()
{
    printf("veuiller sasir votre texte :\n ");
    
    scanf(" %[^\n]", texte);
}

int comptage()
{
    i = 0;
    c = 0;
    while (texte[i] != '\0')
    {
        c++;
        i++;
    }
    return (c);
}

void traiter()
{
    x = comptage(); 
    i = 0;          
    
    while (texte[i] != '\0')
    {
       
        if (texte[i] >= 'a' && texte[i] <= 'z' && a
            texte[i] != 'a' && texte[i] != 'e' && texte[i] != 'i' && texte[i] != 'o' && texte[i] != 'u' && texte[i] != 'y' 
            && 
            (texte[i+1] == 'a' || texte[i+1] == 'e' || texte[i+1] == 'i' || texte[i+1] == 'o' || texte[i+1] == 'u' || texte[i+1] == 'y'))
        {
            
            for (k = x; k > i; k--)
            {
                texte[k + 2] = texte[k];
            }

         
            texte[i + 1] = 'I';
            texte[i + 2] = 'T';
            
           
            x = x + 2; 
            i = i + 3; 
        }
        else
        {
          
            i++;
        }
    }
    
    printf("%s\n", texte);
}

int main()
{
    affichage();
    traiter();
    return (0);
}aaa
