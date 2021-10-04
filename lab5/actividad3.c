#include <stdio.h>
#include <math.h>

float Nentero1 = 0;
float Nentero2 = 0;
float resultado = 0;
 


int main(){
    printf("introdusca dos numeros enteros a multiplicar por favor\n");
    printf("introdusca los numeros de la siguente forma X.X , Y.Y\n");
    scanf("%f , %f", &Nentero1, &Nentero2);

     resultado = Nentero2 * Nentero1;

    printf("el resultado de la multiplicacion es %f\n", resultado);

}