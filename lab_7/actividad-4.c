#include <stdio.h>

int resultado;
int numero;
int divisor;
int numero2;


int main() {

    printf("ingrese un numero para obtener numeros primos entre el numero escogido \n");
    scanf("%d", &numero);
    printf("los numeros primos inferiores a %d son:\n ", numero);
    for(int i=1; i<numero; i++){
            numero2=i;
      for(int x=1; x<=numero2; x++){
          resultado=(numero2%x);
        if(resultado!=0){
            continue;
         }
         divisor=divisor+1;
    }
        if(divisor==2){
             printf("%d \n ", numero2);
        }
            divisor=0;
    }
            return 0;
}
