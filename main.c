/*
*Fonction qui renvoi le rang de la valeur minimal(dernier)
*
*/

#include <stdio.h>
#include <stdlib.h>

int rangMin(FILE * f);

int main()
{
    int r;
    FILE * fichier =fopen("fichier.txt","r");
    r = rangMin(fichier);
    printf("Le rang minimal est : %d",r);

  fclose(fichier);
 return 0;
}

int rangMin(FILE *f){
    int rang = 1 , rang_min , val , min;
    f = fopen("fichier.txt", "r");
    if(feof(f)) return rang = 0;

    fscanf(f,"%d",&min);
        while(!feof(f)){
            fscanf(f,"%d",&val); rang ++;
                if(min >= val){
                    min = val;
                    rang_min = rang;
                }
        }
  fclose(f);
 return rang_min;
}
