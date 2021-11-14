#include <stdio.h>
#include <string.h> /* para el funcionamiento de gets, strcmp */
#include <stdlib.h> /* para el funcionamiento de system */

#define TECLA_ENTER 13
#define TECLA_BACKSPACE 8
#define LONGITUD 5
#define MAX_INTENTOS 3
#define NUMERO_USUARIOS 5

int opcion;

void climatizacion_manual();
void climatizacion_automatica();
void iluminacion_manual();
void iluminacion_automatica();
void persianas_manual();
void persianas_automatico();


int main() {
	char usuario[LONGITUD + 1];
	char clave[LONGITUD + 1];
	int intento = 0;
	int ingresa = 0;
	char caracter;
	int i = 0;
    int j = 0;

    /* Declaración e inicialización de arreglos de usuarios y claves */
    char usuarios[NUMERO_USUARIOS][LONGITUD + 1] = {"Flo", "Mati", "Nico", "Diego", "kevin"};
    char claves[NUMERO_USUARIOS][LONGITUD + 1] = {"123", "456", "789", "abc", "987"};
	
	do {
		i = 0;
		system("cls");
		printf("\n\t\t\tINICIO DE SESION\n");
		printf("\t\t\t---------------\n");
		printf("\n\tUSUARIO: ");
		gets(usuario);
		printf("\tCLAVE: ");
    gets(clave);
	
        /* El usuario y clave debe coincidir con alguno de los que se encuentran en el array */
        for (j = 0; j < NUMERO_USUARIOS; ++j) {
            if (strcmp(usuario, usuarios[j]) == 0 && strcmp(clave, claves[j]) == 0) {
                ingresa++;
                break;
                
            }
        }

        if (ingresa == 0) {
            printf("\n\tUsuario y/o clave son incorrectos\n");
            intento++;
            getchar();
        }
		
		
	} while (intento < MAX_INTENTOS && ingresa == 0);
	
	if (ingresa == 1) {  /* código del programa cuando el usuario ingresa sus credenciales correctas */
		printf("\n\n\tbienvenido a su hogar automata\n");
		
       
    printf("1.-climatizacion\n");
    printf("2.-iluminacion\n");
    printf("3.-percianas\n");
    printf("4.-estado del hogar\n");


printf("elija una opcion:");
scanf("%i", &opcion);  

// Validar el dato
    while((opcion < 1) || (opcion > 4)){
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
                                  climatizacion_automatica(); 
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

  case 4: system ("clear");            
            printf("estado del hogar\n");
            printf("1.-estado de los sensores\n");
            printf("2.-estado del hogar\n");
            scanf("%i", &opcion);

              // Validar
                while((opcion < 1) || (opcion > 2)){
                        system("clear");
                        printf("Opción inválida por favor ingrese nuevamente: ");
                        scanf("%i", &opcion);
                }
                   switch(opcion){
                          case 1: system("clear");
                                  printf("estado de los sensores\n");
                                 

                                  break;
                          case 2: system("clear");
                                  printf("estado del hogar\n");
                                  
                                  
                                  break;
                          default: printf("La opción ingresada no es válida!\n");
                }


            break;
  default: printf("intentalo de nuevo\n");
}


	} else {
		printf("\n\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
	}

	return 0;
}

void climatizacion_manual(){
//hacer configuracion de humedad deseada
//hacer configuracion de temperatura deseada
}

void climatizacion_automatica(){
//sensor de humedad
//liberador de humedad
//sensor de temperatura
//aire acondicionado
}

void iluminacion_manual(){
//hacer configuracion para horario de encendido y apagado de las luces
//hacer configuracion para encendido de luces segun la luz externa
}

void iluminacion_automatica(){
//sensor de luz/infrarrojo/fotorresistencia
//encender luces
}

void persianas_manual(){
//configurar horario de cierrer y apertura de persianas
//configurar cierre y apertura de persianas segun la luz
}

void persianas_automatico(){
//sensor de luz/infrarrojo/fotorresistencia
// subir/bajar persianas
}



/* 
break rompe un bucle
strcmp devolverá 0 si las cadenas son iguales. En caso de que la primera sea “menor” que la segunda, devolverá un número negativo, y finalmente si la primera es mayor que la segunda, devolverá un número positivo
system Sirve para ejecutar subprocesos o comandos del sistema operativo. «system» permite ejecutar a su vez otras funciones como: «cls», «dir» o «pause»

*/