#include <stdio.h>

float trabajo1;
float trabajo2;
float trabajo3;
float laboratorios;
float evaluacion1;
float evaluacion2;
int main(){

    printf("Bienvenido\n");
    printf("¿Quieres saber que calificacion necesitas para apobra el ramo?\n");
    printf("introdusca la calificacion de la trabajo 1 \n");
    scanf("%f", &trabajo1);
    printf("introdusca la calificacion de la trabajo 2 \n");
    scanf("%f", &trabajo2);
    printf("introdusca la calificacion de la trabajo 3 \n");
    scanf("%f", &trabajo3);
    printf("introdusca la calificacion de los laboratorios \n");
    scanf("%f", &laboratorios);
    printf("introdusca la calificacion de la evaluacion 1 \n");
    scanf("%f", &evaluacion1);

evaluacion2 = (4.0 -((trabajo1 * 0.1) + (trabajo2 * 0.1) + (trabajo3 * 0.1) + (laboratorios * 0.1) + (evaluacion1 * 0.25))) / 0.35; 

if(evaluacion2<=7 && evaluacion2>=1){

    printf("la calificacion en la evaluacion 2 es un %f\n", evaluacion2);
}
if(evaluacion2<1){
   printf("has aprobado el ramo\n");
}
if(evaluacion2>7){
  printf("lo lamento has reprobado el ramo\n");
}
    return 0;
}
