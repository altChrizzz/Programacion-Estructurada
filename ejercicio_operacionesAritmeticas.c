#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
/*1.  Pedir 2 numeros al usuario y sumarlos, restarlos, multiplicarnos y dividirlos. */

    int num1, num2, suma, resta, multi, divi;

    printf("A continuacion te solicitaremos 2 numeros para sumarlos, restarlos, multiplicarlos y dividirlos por ti\n\n");

    printf("Ingresa los dos numeros: \n");
    scanf("%d %d",&num1,&num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;

    printf("La suma es: %d \n", suma);

    printf("La resta es: %d \n", resta);

    printf("La multiplicacion es: %d \n", multi);

    printf("La division es: %d \n", divi);

    printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");

/* 2. Convertir grados celsius a fahrenheit */

    int gradosC;
    float gradosF; //float para que se muestren los decimales

    printf("Este programa funciona como conversor de grados celsius a grados fahrenheit \n\n");

    printf("Ingresa los grados celsius: \n");
    scanf("%d", &gradosC); //ampersan para los datos en scanf

    gradosF = gradosC * 1.8 + 32; //operacion a realizar

    printf("Los grados fahrenheit son: %.2f \n", gradosF);

    printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");

/* 3. Hipotenusa de un triangulo */

    float hipo, cat1, cat2;

    printf("Ingresa los dos catetos: \n\n");
    scanf("%f %f", &cat1,&cat2);

    hipo = sqrt(pow(cat1,2)+pow(cat2,2));

    printf("La hipotenusa del triangulo es: %.2f", hipo);

    printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");


/*4. Calcula longitudes de circunferencia */

    printf("Este programa te ayudara a sacar la longitud de circunferencia de algo\n\n");

    float radio, res;

    printf("Ingresa el radio: \n");
    scanf("%f", &radio);

    res = 2*M_PI*radio;

    printf("La longitud de circunferencia es: %f \n", res);

    printf("\n\n---------------------------------------------------------------------------------------------------------\n\n");

/*5. Area de un trapecio */

    printf("Este programa te ayudara a sacar el area de un trapecio \n\n");

    float baseMa, baseMe, alt, are;

    printf("A continuacion ingresaras la base mayor, la base menor y la altura del trapecio: \n");
    scanf("%f %f %f", &baseMa, &baseMe, &alt);

    are = ((baseMa+baseMe)*alt)/2;

    printf("El area del trapecio es: %f \n", are);

/*6. Calcula la media aritmetica de tres numeros cualesquiera */

    printf("Este programa te ayudara a calcular la media aritmetica de tres numeros cualesquiera \n\n");

    int numero1, numero2, numero3, mediaA;

    printf("Ingresa los tres valores: \n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    mediaA = numero1+numero2+numero3/2;

    printf("La media aritmetica de los tres valores es: %d \n", mediaA);

    return 0;
}
