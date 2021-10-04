#include <stdio.h>
#include <math.h>

int main(){
  int numero1 = 0;
  int numero2 = 0;
  int resultado = 0;
  printf("porfavor ingrese el primer numero:\n");
  scanf("%i", &numero1);
  printf("porfavor ingrese el segundo numero:\n");
  scanf("%i", &numero2);
  resultado = numero1 + numero2;
  printf("resultado de la suma entre %i y %i es: %i\n", numero1, numero2, resultado);
  return 0;
}