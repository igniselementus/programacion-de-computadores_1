#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libreriagato.h"


/* 0=falso, 1=verdadero*/


int main(){
    int vencedor = 0;
    int rondas = 0;


    tablero_1();

    while(!vencedor && rondas < 9){

        ingresar_jugada();
        tablero_2();

        condicion_victoria();
}
    return 0; 
}