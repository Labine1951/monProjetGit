#include <stdio.h>
#include <stdlib.h>

/* un essai de conversion de Farenheit en Centigrade
J'ai pas essayé de flusher le clavier, MAIS j'en suis conscient */

int main()
{
    char Tdepart;
    float farenh, centig;

while(Tdepart != 'X') {

    printf("Convertir EN F pour Farenheight \n");
    printf(" ou bien C pour obtenir des Centigrades\n");
    printf(" choisir X pour sortir du programme\n");
    Tdepart=getchar();

    switch(Tdepart) {
        case 'F':
        puts("combien en C");
        scanf("%f", &centig);
        farenh=(centig*9/5)+32;
        printf("%f degrés centigrade = %f degrés Farenheit\n\n", centig, farenh);
        break;

        case 'C':
        puts("combien en F");
        scanf("%f", &farenh);
        centig=5*(farenh-32)/9;
        printf("%f degrés farenheit = %f degrés Centigrade\n\n", farenh, centig);
        break;

        default:
        printf("Passé par ici");
        break;
        }

    }  /* fin de la boucle while */

return 0;
}
