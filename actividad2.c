#include <stdio.h>
#include <math.h>
char c; 

int main(){

    printf("este es un conversor a codigo ACII\n");
    printf("introdusca su caracter por favor\n");
    scanf("%c", &c);

    printf("valor de %c combertido a ACII es: %d", c, c);
}