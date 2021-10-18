#include <stdio.h>

int main(){

int opcion;

printf("bienvenido a su hogar automata\n");
printf("1.-climatizacion\n");
printf("2.-iluminacion\n");
printf("3.-percianas\n");

printf("elija una opcion");
scanf("%i", &opcion);  

switch(opcion){
  case 1: printf("climatizacion\n");
    break;
  case 2: printf("iluminacion\n");
    break;
  case 3: printf("percianas\n");
    break;

  default: printf("intentalo de nuevo\n");
}

return 0;
}