#include <stdio.h>

int mesa_control[10][10] = {
    {2, 9, 0, 0, 10, 9, 6, 10, 5, 4},
    {9, 6, 5, 0, 0, 9, 6, 3, 2, 8},
    {3, 3, 8, 10, 6, 9, 5, 4, 3, 9},
    {2, 6, 3, 6, 4, 3, 6, 2, 8, 3},
    {6, 6, 9, 10, 3, 4, 6, 2, 9, 9},
    {4, 10, 4, 4, 9, 0, 9, 10, 8, 8},
    {2, 2, 0, 3, 5, 4, 4, 6, 6, 5},
    {8, 4, 1, 3, 9, 5, 6, 6, 7, 7},
    {8, 1, 4, 9, 5, 7, 7, 3, 4, 4},
    {4, 8, 5, 4, 2, 3, 3, 2, 3, 6},
};

int Horizontal, Vertical;
int Exploracion =4 ;
int Cuadros=0; 
int tesoros=0;
char Norte, Oeste, Sur, Este;
int Latitud, Longitud;
int MovimientoX, MovimientoY;
char DireccionX, DireccionY;

int main(){
    printf("----Bienvenido a robot submarino----\n");
    
   
    for (int i = 0; i < Exploracion; i++){
        tesoros = 0, Cuadros=0;
            printf("Exploracion numero: %d\n", i+1);
            printf("Ingrese coordenadas de inicio, de forma Horizontal, Vertical, Horizontal, Vertical:\n");

            printf("Plano de coordenadas\n");
            printf("1,1 /1,2/ 1,3/ 1,4/ 1,5/ 1,6/ 1,7/ 1,8/ 1,9/ 1,10\n");
            printf("2,1 /2,2/ 2,3/ 2,4/ 2,5/ 2,6/ 2,7/ 2,8/ 2,9/ 2,10\n");
            printf("3,1 /3,2/ 3,3/ 3,4/ 3,5/ 3,6/ 3,7/ 3,8/ 3,9/ 3,10\n");
            printf("4,1 /4,2/ 4,3/ 4,4/ 4,5/ 4,6/ 4,7/ 4,8/ 4,9/ 4,10\n");
            printf("5,1 /5,2/ 5,3/ 5,4/ 5,5/ 5,6/ 5,7/ 5,8/ 5,9/ 5,10\n");
            printf("6,1 /6,2/ 6,3/ 6,4/ 6,5/ 6,6/ 6,7/ 6,8/ 6,9/ 6,10\n");
            printf("7,1 /1,2/ 7,3/ 7,4/ 7,5/ 7,6/ 7,7/ 7,8/ 7,9/ 7,10\n");
            printf("8,1 /8,2/ 8,3/ 8,4/ 8,5/ 8,6/ 8,7/ 8,8/ 8,9/ 8,10\n");
            printf("9,1 /9,2/ 9,3/ 9,4/ 9,5/ 9,6/ 9,7/ 9,8/ 9,9/ 9,10\n");
            printf("10,1 /10,2/ 10,3/ 10,4/ 10,5/ 10,6/ 10,7/ 10,8/ 10,9/ 10,10\n");

            printf("ejemplo: 1,8\n");
            scanf("%d,%d", &Horizontal, &Vertical);
        tesoros = tesoros + mesa_control[Horizontal-1][Vertical-1];
        printf("Aqui hay %d tesoros\n", mesa_control[Horizontal-1][Vertical-1]);
        
            printf("En que direccion desea desplazarse?\n");
            printf("Tome en cuenta que el movimiento sera horizontal y luego vertical\n");
            printf("Ingrese su respuesta como coordenadas geograficas (ejemplo 6 N,5 E; 4 S,6 O)\n");
            scanf("%d %c,%d %c", &Latitud, &DireccionY, &Longitud, &DireccionX);
        while((DireccionY=='O')||(DireccionY=='E')||(DireccionX=='N')||(DireccionX=='S')){
            printf("movimiento invalido, ingrese nuevamente\n");
            scanf("%d %c,%d %c", &Latitud, &DireccionY, &Longitud, &DireccionX); 
        }
        MovimientoY = Latitud; MovimientoX = Longitud;
        if (DireccionY == 'N'){
            Latitud = Latitud*(-1);
        }
        if (DireccionX == 'O'){
            Longitud = Longitud*(-1);
        }    
        while(((Horizontal+Latitud)>10)||((Vertical+Longitud)>10)||((Longitud+Vertical)<1)||((Latitud+Horizontal)<1)){
            printf("Este movimiento se sale del area de estudio. Intente otra coordenadas\n");
            scanf("%d %c,%d %c", &Latitud, &DireccionY, &Longitud, &DireccionX);
        }
        while(((Horizontal+Latitud)>10)||((Vertical+Longitud)>10)||((Vertical+Longitud)<1)||((Horizontal+Latitud)<1)){
            printf("Este movimiento se sale del area de estudio. Intente otra coordenadas\n");
            scanf("%d %c,%d %c", &Latitud, &DireccionY, &Longitud, &DireccionX);
        }
        printf("El movimiento sera %d,%d\n", Latitud, Longitud);

        for (int y = 0; y<MovimientoY; y++){
            if (Latitud<0){
                Horizontal = Horizontal - 1;
            } else if(Latitud>0){
                Horizontal = Horizontal + 1;
            }
            printf("En la casilla %d,%d hay %d tesoros\n", Horizontal, Vertical, mesa_control[Horizontal-1][Vertical-1]);
            tesoros = tesoros + mesa_control[Horizontal-1][Vertical-1];
            Cuadros = Cuadros + 1;
        }
        for (int x = 0; x<MovimientoX; x++){
            if (Longitud>1){
                Vertical = Vertical + 1;
            } else if(Longitud<1){
                Vertical = Vertical - 1;
            }                 
            printf("En la casilla %d,%d hay %d tesoros\n", Horizontal, Vertical, mesa_control[Horizontal-1][Vertical-1]);
            tesoros = tesoros + mesa_control[Horizontal-1][Vertical-1];
            Cuadros = Cuadros + 1;
            
        }
        printf("En esta Exploracion:\n");
        printf("Se encontraron %d tesoros\n", tesoros);
        printf("Se recorrrieron %d Cuadros\n\n", Cuadros);
    }
    return 0;
}