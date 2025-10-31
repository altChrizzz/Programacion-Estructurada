#include <stdio.h>
#include <stdlib.h>

float areaRectangulo(float base, float altura) {
    return base * altura;
}

float areaCuadrado(float lado) {
    return lado * lado;
}

float areaTrinagulo(float base, float altura) {
    return base * altura / 2;
}

int main() {
    float base, altura, lado;
    int opcion;

    printf("=== CALCULO DE AREAS ===\n");
    printf("1. Area de un rectangulo\n");
    printf("2. Area de un cuadrado\n");
    printf("3. Area de un triangulo\n");
    printf("4. Salir\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
    case 1:
        printf("\n--- Area de un rectangulo ---\n");
        printf("Ingrese base y altura: \n");
        scanf("%f %f", &base, &altura);
        printf("El area de un rectangulo es: %.2f\n", areaRectangulo(base, altura));
        break;

    case 2:
        printf("\n--- Area de un cuadrado ---\n");
        printf("Ingrese el lado: \n");
        scanf("%f", &lado);
        printf("El area del cuadrado es: %.2f\n", areaCuadrado(lado));
        break;

    case 3:
        printf("\n--- Area de un triangulo ---\n");
        printf("Ingrese base y altura: \n");
        scanf("%f %f", &base, &altura);
        printf("El area del triangulo es: %.2f\n", areaTrinagulo(base, altura));
        break;

    case 4:
        printf("\nSaliendo del programa...\n");
        break;

    default:
        printf("\nOpcion no valida. Intente de nuevo.\n");

    }

    return 0;
}
