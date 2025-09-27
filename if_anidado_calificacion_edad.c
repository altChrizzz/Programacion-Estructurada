#include <stdio.h>
#include <stdlib.h>

int main() {
    int ed, cal;

    printf("Escribe tu edad: \n");
    scanf("%d", &ed);

    printf("Escribe tu calificacion: \n");
    scanf("%d", &cal);

    if (ed >= 18) {

        if (cal >= 60) {
            printf("APROBADO. Mayor de edad.\n");
        } else {
            printf("REPROBADO. Mayor de edad.\n");
        }

    } else {

        if (cal >= 60) {
            printf("APROBADO. Menor de edad.\n");
        } else {
            printf("REPROBADO. Menor de edad.\n");
        }
    }

    return 0;
}
