#include <stdio.h>
#include <stdlib.h>

    void main() {

        int x = 0, y = 0;
        int matriz[10][10];

        for (x = 0; x < 10; x++) {
            for (y = 0; y < 10; y++) {
                matriz[x][y] = rand() % 10;
            }
        }
        x = 0;
        y = 0;

        printf("\n\nLos valores del eje X son los siguientes: ") ;

        for (x=0;x<10;x++){
            printf("\nX = %i",matriz[x]);
        }

        printf("\n\nLos valores del eje Y son los siguientes: ") ;

        for (y=0;y<10;y++){
            printf("\nY = %i",matriz[y]);
        }

    }


#include <stdio.h>
#include <stdlib.h>

void main() {

    int x = 0, y = 0;
    int matriz[10][10];


    printf("Las intersecciones son para X: ");

    printf("Las intersecciones son para Y: ");

    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            printf("\nX = %i ", rand() % 10);

            printf("\nY = %i", rand() % 10);
        }
    }

}
