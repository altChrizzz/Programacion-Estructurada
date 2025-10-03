#include <stdio.h>

int mostrarMenu() {
    int o; // 'o' para opción
    printf("\n--- Menu ---\n");
    printf("Que Quieres hacer ?\n");
    printf("1) Mostrar todos los resultados\n");
    printf("2) Mostrar resultado de un partido en especifico\n");
    printf("3) Modificar todos los resultados.\n");
    printf("4) Modificar resultado de un partido en especifico.\n");
    printf("5) Mostrar estadistico (promedio de goles por partido)\n");
    printf("0) Salir\n");
    printf("-----------------\n");
    printf("Seleccione una opcion: ");

    if (scanf("%d", &o) != 1) {
        return -1;
    }
    return o;
}

int main() {
    int resultados[6] = {1, 2, 0, 0, 3, 2};
    int op;
    printf("Arreglo inicializado con los resultados: 1 2 0 0 3 2\n");

    do {
        op = mostrarMenu();

        switch (op) {
            case 1: {
                printf("\n--- Todos los Resultados ---\n");
                for (int i = 0; i < 6; i++) {
                    printf("Partido %d: %d goles\n", i + 1, resultados[i]);
                }
                break;
            }

            case 2: {
                int i;
                printf("Ingrese el numero de partido (1 a 6): ");

                if (scanf("%d", &i) != 1) {
                    printf("Entrada invalida.\n");
                    break;
                }

                if ((i >= 1) && (i <= 6)) {
                    printf("Resultado del Partido %d: %d goles\n", i, resultados[i - 1]);
                } else {
                    printf("\nOpcion invalida o fuera de rango. Continua...\n");
                }

                break;
            }

            case 3: {
                int g;
                printf("\n--- Modificar Todos los Resultados ---\n");

                for (int i = 0; i < 6; i++) {
                    printf("Ingrese los goles para el Partido %d: ", i + 1);

                    if (scanf("%d", &g) == 1 && g >= 0) {
                        resultados[i] = g;
                    } else {
                        printf("\nEntrada invalida, volviendo al menu principal.\n");
                        i = 6;
                    }
                }
                printf("Todos los resultados han sido modificados (si no hubo errores).\n");
                break;
            }

            case 4: {
                int i, g;
                printf("Ingrese el numero de partido a modificar (1 a 6): ");

                if (scanf("%d", &i) != 1) {
                    printf("Entrada invalida para el indice.\n");
                    break;
                }

                if ((i >= 1) && (i <= 6)) {
                    printf("Ingrese los nuevos goles para el Partido %d: ", i);
                    if (scanf("%d", &g) == 1 && g >= 0) {
                        resultados[i - 1] = g;
                        printf("Resultado modificado a %d goles.\n", g);
                    } else {
                        printf("\nGoles invalidos. Continua...\n");
                    }
                } else {
                    printf("\nIndice fuera de rango. Continua...\n");
                }

                break;
            }

            case 5: {
                int s = 0;
                float p;

                for (int i = 0; i < 6; i++) {
                    s += resultados[i];
                }

                if (6 > 0) {
                    p = (float)s / 6;
                    printf("\n--- Estadisticas ---\n");
                    printf("Total de goles: %d\n", s);
                    printf("Promedio de goles por partido: %.2f\n", p);
                } else {
                    printf("\nError en el tamanio. Continua...\n");
                }

                break;
            }

            case 0:
                printf("ADIOS!\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
                break;
        }
    } while (op != 0);

    return 0;
}
