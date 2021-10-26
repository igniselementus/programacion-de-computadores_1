#include <stdio.h>
#include <stdlib.h>

int main(){

int opcion;

printf("bienvenido a su hogar automata\n");
printf("1.-climatizacion\n");
printf("2.-iluminacion\n");
printf("3.-percianas\n");

// añadir informe del estado hogar

printf("elija una opcion");
scanf("%i", &opcion);  

// Validar el dato
    while((opcion < 1) || (opcion > 3)){
        system("clear");
        printf("Opción inválida por favor ingrese nuevamente: ");
        scanf("%i", &opcion);
    }

switch(opcion){
  case 1: system ("clear");           
            printf("climatizacion\n");
            printf("1.-configurar parametros\n");
            printf("2.-ajuste predeterminado\n");
            scanf("%i", &opcion);

              // Validar
                while((opcion < 1) || (opcion > 2)){
                        system("clear");
                        printf("Opción inválida por favor ingrese nuevamente: ");
                        scanf("%i", &opcion);
                }

                  switch(opcion){
                          case 1: system("clear");
                                  printf("configurar parametros\n");
                                  //funcion para configurar la climatizacion 
                                  climatizacion_manual();
                                  break;
                          case 2: system("clear");
                                  printf("ajuste predeterminado\n");
                                  //funcion ajustes automaticos 
                                  climatizacion_automatico(); 
                                  break;
                          default: printf("La opción ingresada no es válida!\n");
                }

            break;
  case 2:  system ("clear");           
            printf("iluminacion\n");
            printf("1.-cufigurar parametros\n");
            printf("2.-ajuste predeterminado\n");
            scanf("%i", &opcion);

              // Validar
                while((opcion < 1) || (opcion > 2)){
                        system("clear");
                        printf("Opción inválida por favor ingrese nuevamente: ");
                        scanf("%i", &opcion);
                }

                  switch(opcion){
                          case 1: system("clear");
                                  printf("configurar parametros\n");
                                    // funcion para configurar la iluminacion
                                    iluminacion_manual();
                                    break;
                          case 2: system("clear");
                                  printf("ajuste predeterminado\n");
                                    // funcion ajuste predeterminado
                                    iluminacion_automatica();
                                    break;
                          default: printf("La opción ingresada no es válida!\n");
                }


            break;
  case 3:  system ("clear");            
            printf("persianas\n");
            printf("1.-cufigurar parametros\n");
            printf("2.-ajuste predeterminado\n");
            scanf("%i", &opcion);

              // Validar
                while((opcion < 1) || (opcion > 2)){
                        system("clear");
                        printf("Opción inválida por favor ingrese nuevamente: ");
                        scanf("%i", &opcion);
                }

                  switch(opcion){
                          case 1: system("clear");
                                  printf("configurar parametros\n");
                                  //funcion para configurar persianas 
                                  persianas_manual(); 
                                  break;
                          case 2: system("clear");
                                  printf("ajuste predeterminado\n");
                                  //funcion  ajustes predeterminados 
                                  persianas_automatico();
                                  break;
                          default: printf("La opción ingresada no es válida!\n");
                }


            break;
  default: printf("intentalo de nuevo\n");
}

return 0;
}

// 2 variables por item

void climatizacion_manual(){
//hacer configuracion de humedad deseada
//hacer configuracion de temperatura deseada
}

void climatizacion_automatico(){
//mantener la humedad deseadad
//mantener la temperatura deseada
}

void iluminacion_manual(){
//hacer configuracion para horario de encendido y apagado de las luces
//hacer configuracion para encendido de luces segun la luz externa
}

void iluminacion_automatica(){
//encendido de luces segun laluz externa
}

void persianas_manual(){
//configurar horario de cierrer y apertura de persianas
//configurar cierre y apertura de persianas segun la luz
}

void persianas_automatico(){
//configurar cierre y apertura de persianas segun la luz
}