#include <stdio.h>

int main(){

int clave=21011191;
int entrada=clave;

    printf("Favor ingrese clave\n");
    scanf("%d",&entrada);

    if(entrada == clave){
        printf("bienvenido\n");
    }else{
        printf("la clave es incorrecta le quedan 2 intento\n");
        scanf("%d",&entrada);
    }
    if(entrada == clave){
        printf("la clave es correcta\n");


    }else{
        printf("la clave es incorrecta le quedan 1 intento\n");
        scanf("%d",&entrada);
    }
     if(entrada == clave){
        printf("la clave es correcta\n");

    }  else{
        printf("su cuenta ha sido bloqueada\n");
        scanf("%d",&entrada);

    }
    return 0;

    }