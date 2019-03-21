#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, i, j;
    printf("Ecrivez la valeur de la hauteur\n");
    scanf("%d", &h);

    ///code triangle
    for(i=0; i<h; i++){
        ///dessiner une ligne
        ///espace
        for(j=0; j<h-1-i; j++){
            printf(" ");
        }
        printf("\n");
        ///Etoiles
        for(j=0; j<2*i+1; j++){
            printf("*");
        }
    }

    printf("\n");

    return 0;
}
