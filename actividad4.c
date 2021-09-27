#include <stdio.h>
#include <math.h>

float Radio;
float Perimetro;
float Area;

int main(){
    printf("introdusca el area del circulo para calcular el perimetro y el area\n");
    scanf("%f", &Radio);

    Perimetro = (2 * M_PI * Radio);
    Area = (M_PI * Radio);

    printf ("el resultado de perimetro es %f y el area es %f", Perimetro, Area);
}