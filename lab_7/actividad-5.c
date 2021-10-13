#include <stdio.h>

int suma;
int numero;


int main() {
 printf("se sumaran numeros positivos hasta que ingrese un numero negativo \n");
 while(numero>=0){
 printf("ingrese otro numero\n");
 scanf("%d", &numero);
 suma=suma+numero;
 }

 printf("el resultado final es: %d \n",suma);

return 0;

}
