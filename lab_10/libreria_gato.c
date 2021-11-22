#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libreria_gato.h"

char tablero[3][3];
int horizontal;
int vertical;
int vencedor = 0;
int rondas = 0;

void tablero_1(){
for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            tablero[i][j] = '-';
        }
    }

    printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("----------------\n");
    printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);


}

void ingresar_jugada(){

 if(rondas%2 == 0){
            printf("Jugador X -> Ingrese su jugada de la forma fila,horizontal:\n");
            scanf("%d,%d", &vertical,&horizontal);

            while (tablero [vertical - 0][horizontal - 0] != '-')
            {
                printf("esta jugada ya esta ingresada, por favor ingrese otra\n");
                scanf("%d,%d", &vertical, &horizontal);
            }

            tablero[vertical - 0][horizontal - 0] = 'X'; 
        } else {
            printf("Jugador O -> Ingrese su jugada de la forma vertical,horizontal:\n");
            scanf("%d,%d", &vertical, &horizontal);

            while (tablero[vertical - 0][horizontal - 0] != '-')
            {
                printf("esta jugada ya esta ingresada, por favor ingrese otra\n");
                scanf("%d,%d", &vertical, &horizontal);
            }

            tablero[vertical - 0][horizontal - 0] = 'O'; 
              }
}

void tablero_2(){
printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);
}

void condicion_victoria(){
//horizontales
        if((tablero[2][0] == tablero[2][1]) && (tablero[2][1] == tablero[2][2]) && (tablero[2][0] != '-')){
            printf("WINNER!");
            vencedor = 1;
        }
        if((tablero[1][0] == tablero[1][1]) && (tablero[1][1] == tablero[1][2]) && (tablero[1][0] != '-')){
            printf("WINNER!");
            vencedor = 1;
        }
        if((tablero[0][0] == tablero[0][1]) && (tablero[0][1] == tablero[0][2]) && (tablero[0][0] != '-')){
            printf("WINNER!");
            vencedor = 1;
        }

        //verticales
        if((tablero[0][0] == tablero[1][0]) && (tablero[1][0] == tablero[2][0]) && (tablero[0][0] != '-')){
            printf("WINNER!");
            vencedor = 1;
        }
        if((tablero[0][1] == tablero[1][1]) && (tablero[1][1] == tablero[2][1]) && (tablero[0][1] != '-')){
            printf("WINNER!");
            vencedor = 1;
        }
       if((tablero[0][2] == tablero[1][2]) && (tablero[1][2] == tablero[2][2]) && (tablero[0][2] != '-')){
            printf("WINNER!");
            vencedor = 1;
        }

        //diagonales
        if((tablero[0][0] == tablero[1][1]) && (tablero[1][1] == tablero[2][2]) && (tablero[0][0] != '-')){
            printf("WINNER!");
            vencedor = 1;
        }
        if((tablero[0][2] == tablero[1][1]) && (tablero[1][1] == tablero[2][0]) && (tablero[0][2] != '-')){
            printf("WINNER!");
            vencedor = 1;
        }


        rondas++;
    

}