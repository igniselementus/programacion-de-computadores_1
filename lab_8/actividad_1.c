#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

char tablero[3][3];
int horizontal;
int vertical;
int vencedor = 0;
int rondas = 0;

/* 0=falso, 1=verdadero*/


int main(){

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

    do{
        
        if(rondas%2 == 0){
            printf("Jugador X -> introdusca su jugada de forma horizontal,vertical:\n");
            scanf("%d,%d", &horizontal,&vertical);

            tablero[horizontal - 0][vertical - 0] = 'X'; 
        } else {
            printf("Jugador O -> introdusca su jugada de forma horizontal,vertical:\n");
            scanf("%d,%d", &horizontal,&vertical);
            tablero[horizontal - 0][vertical - 0] = 'O'; 
        }

        printf("%c  |  %c  |  %c\n", tablero[0][0], tablero[0][1], tablero[0][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[1][0], tablero[1][1], tablero[1][2]);
        printf("----------------\n");
        printf("%c  |  %c  |  %c\n", tablero[2][0], tablero[2][1], tablero[2][2]);

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


        // solucion de sobreescritura

        rondas++;
    }while(!vencedor && rondas < 9);

    return 0; 
} 