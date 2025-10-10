#include <stdio.h>
#include <stdlib.h>

int main()
{

int a=0, b[3];

printf("%d \n", &a);

printf("%d \n", &b[0]);

printf("%d \n", &b[1]);

printf("%d \n", &b[2]);

printf("%d \n", &b[3]);

int g[3][3]={00,01,02,10,11,12,20,21,22}, i, j;

printf("%d \n", g[2][1]);

for(i=0; i<3; i++){
    for(j=0; j<3; j++)
    {
        printf("\t-%d-\t", g[i][j]);
    } printf("\n");

}

return 0;
}
