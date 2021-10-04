#include <stdio.h>
#include <math.h>

int numero1;
int divisor;

int main(){
    printf("ingrese un numero por favor\n");
    scanf("%d", &numero1);
    divisor = numero1%2;


    if(divisor == 0){
        printf("su numero es par\n");

    }
    else{
        printf("su numero es impar\n");

    }
 
return 0;
}