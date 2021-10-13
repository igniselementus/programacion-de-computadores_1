#include <stdio.h>

int numero;
int resultado=0;


int main(){
    printf("ingrese numero a dividir\n");
    scanf("%d",&numero);
    printf("los numeros divisores  son\n");

    for (int i = 1; i < numero; i++)
    {
        resultado=(numero%i);
        if(resultado!=0){
            continue;
        }

        printf("%d\n",i);
    }

 return 0;    
}
