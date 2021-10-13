#include <stdio.h>

int numero;
int suma;
int num1=0;
int num2=1;



int main(){
    printf("Sucesion de Fibonacci\n");
    printf("ingrese numero para ejecutar\n");
    scanf("%d", &numero);

    printf("0\n");

        for (int i = 0; i <= numero; i++)
        {
            suma= num1 + num2;
            printf("--------\n");
            printf("%d\n",suma);
            num1=num2;
            num2=suma;          
        }
        return 0;
    }
