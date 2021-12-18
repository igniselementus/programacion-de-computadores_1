
/* Universidad de La Frontera
* Departamento de Ingeniería Eléctrica
*
* ICC-202 PROGRAMACION DE COMPUTADORES
*
* Tarea 3
*
* Autores: Diego Ignacio Herrera Arriagada  mail: d.herrera07@ufromail.cl
*          Nicolas Rodolfo Vasquez Peña     mail: 
*
* Fecha: 01/12/2021
*
* Descripción general del programa: 
*
*
*
*
*
*/

#include <stdio.h>
#include <string.h> /* para el funcionamiento de gets, strcmp */
#include <stdlib.h> /* para el funcionamiento de system */
#include "./libreria.h"


#define LONGITUD 5
#define MAX_INTENTOS 3
#define NUMERO_USUARIOS 5

int opcion;


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
		
       
    printf("\n1.-climatizacion\n");
    printf("2.-iluminacion\n");
    printf("3.-percianas\n");
    printf("4.-estado del hogar\n");
    printf("\n\telija una opcion:");
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
            printf("1.-configuracion manual\n");
            printf("2.-configuracion predeterminada\n");
            printf("\n\telija una opcion:");
            scanf("%i", &opcion);

              // Validar
                while((opcion < 1) || (opcion > 2)){
                        system("clear");
                        printf("Opción inválida por favor ingrese nuevamente: ");
                        scanf("%i", &opcion);
                }

                  switch(opcion){
                          case 1: system("clear");
                                  printf("configuracion manual\n");
                                  
                                  climatizacion_manual();

                                  break;
                          case 2: system("clear");
                                  printf("configuracion predeterminada\n");

                                  climatizacion_automatica();
                                                                      
                                  break;
                          default: printf("La opción ingresada no es válida!\n");
                }

            break;
  case 2:  system ("clear");           
            printf("iluminacion\n");
            printf("1.-cufiguracion manual\n");
            printf("2.-configuracion predeterminada\n");
            printf("\n\telija una opcion:");
            scanf("%i", &opcion);

              // Validar
                while((opcion < 1) || (opcion > 2)){
                        system("clear");
                        printf("Opción inválida por favor ingrese nuevamente: ");
                        scanf("%i", &opcion);
                }

                  switch(opcion){
                          case 1: system("clear");
                                  printf("configuracion manual\n");
                                    
                                  iluminacion_manual();                              

                                    break;
                          case 2: system("clear");

                                  iluminacion_automatica();                                  

                                    break;
                          default: printf("La opción ingresada no es válida!\n");
                }


            break;
  case 3:  system ("clear");            
            printf("persianas\n");
            printf("1.-cufiguracion manual\n");
            printf("2.-configuracion predeterminada\n");
            printf("\n\telija una opcion:");
            scanf("%i", &opcion);

              // Validar
                while((opcion < 1) || (opcion > 2)){
                        system("clear");
                        printf("Opción inválida por favor ingrese nuevamente: ");
                        scanf("%i", &opcion);
                }

                  switch(opcion){
                          case 1: system("clear");
                                  printf("configuracion manual\n");
                                  
                                  persianas_manual();

                                  break;
                          case 2: system("clear");
                                  printf("configuracion predeterminada\n");

                                  persianas_automatico();
                               
                                  break;
                          default: printf("La opción ingresada no es válida!\n");
                }
break;
  case 4: system ("clear");            
            printf("estado del hogar\n");
            printf("1.-estado de los sensores\n");
            printf("2.-estado del hogar\n");
            printf("\n\telija una opcion:");
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
                                  
                                  sistema_hogar_sensores();

                                  break;
                          case 2: system("clear");
                                  printf("estado del hogar\n");
                                  
                                  sistema_estado_del_hogar();
                                  
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
