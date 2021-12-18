#include <stdio.h>
#include <string.h> /* para el funcionamiento de gets, strcmp */
#include <stdlib.h> /* para el funcionamiento de system */
#include "./libreria.h"
 
 //valor sensores
        int humedad_del_hogar = 50;
        int temperatura_del_hogar = 22;
        int luz_del_ambiente = 20;

        //climatizacion manual       
        int humedad_deseada_manual = 0;        
        int temperatura_deseada_manual = 0;

        //climatizacion automatica
        int temperatura_ideal_automatico = 20;
        int humedad_ideal_automatico = 55;
        
        //iluminacion manual
        int hora_encendido_luces_manual = 0;
        int hora_apagado_luces_manual = 0;
        int hora_encendido_luces_externas_manual = 0;
        int hora_apagado_luces_externas_manual = 0;
        
        //iluminacion automatica
        int hora_encendido_luces_automatico = 18;
        int hora_apagado_luces_automatico = 24;
        int hora_encendido_luces_exterior_automatico = 18;
        int hora_apagado_luces_exterior_automatico = 24;

        //persianas manual
        int apertura_persianas_manual = 0;
        int cierre_persianas_manual = 0;

        //parametros sensores
        int luz_manual_luces = 0;
        int luz_manual_persianas = 0;



/*
* Nombre de la función: climatizacion_manual 
* Tipo de función: void
* Parámetros: 
* Dato de retorno: no retorna ningun dato ya que es una funcion void
* Descripción de la función: esta funcion permite al usuario configurar el aire acondicionado a los parametros que el desea
*
*/

void climatizacion_manual(){
//configuracion de humedad deseada

printf("\nLa humedad de la casa en este momento es: %i \n", humedad_del_hogar);
printf("\n ¿Qué porcentaje de humedad desea?\n");
scanf("%i", &humedad_deseada_manual);
system("clear");
//configuracion de temperatura deseada
printf("\n La temperatura de la casa es %i\n", temperatura_del_hogar);
printf("\n ¿Qué temperatura desea?\n");
scanf("%i", &temperatura_deseada_manual);
system("clear");
printf("\n Su casa ha sido configurada con %i de humedad y %i grados de temperatura\n", humedad_deseada_manual, temperatura_deseada_manual);

}


/*
* Nombre de la función: climatizacion_automatica
* Tipo de función: void
* Parámetros: 
* Dato de retorno: no retorna ningun dato ya que es una funcion void
* Descripción de la función: maneja la temperatura y humedad del hogar con configuracion predeterminada
*
*/

void climatizacion_automatica(){
//aire acondicionado por sensores 

printf("\n Su casa ha sido configurada con %i de humedad y %i grados de temperatura\n", humedad_ideal_automatico, temperatura_ideal_automatico);                               
  if(temperatura_del_hogar>22){
    printf("aire acondicionado encendido temperatura\n");                                   
}
  if(temperatura_del_hogar<18){
    printf("aire acondicionado encendido temperatura\n");                                   
}
  if((temperatura_del_hogar>=18) && (temperatura_del_hogar<=22)){
    printf("aire acondicionado apagado temperatura\n");
}

  if(humedad_del_hogar<50){
    printf("aire acondicionado encendido humedad\n");
}
  if(humedad_del_hogar>60){
    printf("aire acondicionado encendido humedad\n");
}
  if((humedad_del_hogar>=50) && (humedad_del_hogar<=60)){
     printf("aire acondicionado apagado humedad\n");
}
}


/*
* Nombre de la función: iluminacion_manual
* Tipo de función: void
* Parámetros: 
* Dato de retorno: no retorna ningun dato ya que es una funcion void
* Descripción de la función: esta funcion permite al usuario configurar el horario de las luces del hogar
*
*/

void iluminacion_manual(){
//hacer configuracion para horario de encendido y apagado de las luces
printf("\n Configure la hora de inicio de encendido y apagado.\n Tenga en cuenta que las horas están en formato 24 hrs\n");
printf("\nIntroduzca hora de encendido\n");
scanf("%i", &hora_encendido_luces_manual);
printf("\nIntroduzca hora de apagado\n");
scanf("%i", &hora_apagado_luces_manual);
system("clear");
printf("\n Las luces de la casa se encienden desde las %i hrs hasta las %i hrs\n", hora_encendido_luces_manual, hora_apagado_luces_manual);
system("clear");
//hacer configuracion para encendido de luces segun la luz externa
printf("\n Configure la hora de inicio de encendido y apagado de las luces externas.\n Tenga en cuenta que las horas están en formato 24 hrs\n");
printf("\nIntroduzca hora de encendido externa\n");
scanf("%i", &hora_encendido_luces_externas_manual);
printf("\nIntroduzca hora de apagado externa\n");
scanf("%i", &hora_apagado_luces_externas_manual);
system("clear");
printf("\n Las luces externas se encienden desde las %i hrs hasta las %i hrs\n", hora_encendido_luces_externas_manual, hora_apagado_luces_externas_manual);
system("clear");

printf("\nintrodusca intencidad de luz minima para encender las luces\n");
scanf("%i", &luz_manual_luces);
system("clear");
printf("\nlas luces se encenderan cuando la intensidad de luz sea menor a %i\n", luz_manual_luces);
  if(luz_del_ambiente<luz_manual_luces){
    printf("se encenderan las luces\n");                                    
}
  if(luz_del_ambiente>luz_manual_luces){
      printf("se apagaran las luces\n");                                   
} 

}


/*
* Nombre de la función: iluminacion_automatica
* Tipo de función: void
* Parámetros: 
* Dato de retorno: no retorna ningun dato ya que es una funcion void
* Descripción de la función: esta funcion maneja las luces del hogar con horarios y intencidad de luz con ajustes integrados
*
*/

void iluminacion_automatica(){
printf("configuracion predeterminada\n");                                   
 //prender y apagar luces segun fotorresistencia
printf("\nlas luces se encenderan al tener una intensidad de luz inferior a 30\n");
  if(luz_del_ambiente<30){
    printf("se encenderan las luces\n");                                    
}
  if(luz_del_ambiente>30){
    printf("se apagaran las luces\n");                                   
}
                                  
//encender luces y apagar luces
printf("\n Las luces de la casa se encienden desde las %i hrs hasta las %i hrs\n", hora_encendido_luces_automatico, hora_apagado_luces_automatico);
printf("\n Las luces externas se encienden desde las %i hrs hasta las %i hrs\n", hora_encendido_luces_exterior_automatico, hora_apagado_luces_exterior_automatico);

}


/*
* Nombre de la función: persianas_manual
* Tipo de función: void
* Parámetros: 
* Dato de retorno: no retorna ningun dato ya que es una funcion void
* Descripción de la función: esta funcion permite al usuario configurar la apertura y el cierre de las percianas del hogar segun la luz y la hora del dia
*
*/

void persianas_manual(){
//configurar horario de cierrer y apertura de persianas
printf("\n Configure la hora de inicio de apertura y cierre de las persianas.\n Tenga en cuenta que las horas están en formato 24 hrs\n");
printf("\nIntroduzca hora de apertura\n");
scanf("%i", &apertura_persianas_manual);
printf("\nIntroduzca hora de cierre\n");
scanf("%i", &cierre_persianas_manual);
system("clear");
printf("\n Las persianas se suben a las %i hrs hasta las %i hrs\n", apertura_persianas_manual, cierre_persianas_manual);
//configurar cierre y apertura de persianas segun la luz
printf("\nintrodusca intencidad de luz minima para bajar las persianas\n");
scanf("%i", &luz_manual_persianas);
system("clear");
printf("\nlas persianas bajaran cuando la intensidad de la luz sea menor a %i\n", luz_manual_persianas);
  if(luz_del_ambiente<luz_manual_persianas){
    printf("se subiran las persianas\n");                                    
}
  if(luz_del_ambiente>luz_manual_persianas){
      printf("se bajaran las persianas\n");                                   
} 

}


/*
* Nombre de la función: persianas_automatico
* Tipo de función: void
* Parámetros: 
* Dato de retorno: no retorna ningun dato ya que es una funcion void
* Descripción de la función: esta funcion maneja laspersianas del hogar con un ajuste integrado
*
*/

void persianas_automatico(){
//subir bajar percianas por luz en el ambiente con fotorresistor
  if(luz_del_ambiente<30){
    printf("\n las persianas bajaran\n");
                                  
}
  if(luz_del_ambiente>30){
    printf("\n las persianas subiran\n");
                                    
}
// subir/bajar persianas
printf("\n las persianas bajan desde las 21:00 asta las 8:00\n");

}


/*
* Nombre de la función: sistema_hogar_sensores
* Tipo de función: void
* Parámetros: 
* Dato de retorno: no retorna ningun dato ya que es una funcion void
* Descripción de la función: permite al usuario ver los datos de los sensores incorporados en el hogar
*
*/

void sistema_hogar_sensores(){
printf("la temperatura del hogar es de %i  grados celcius\n", temperatura_del_hogar);
printf("la humedad en el ambiente es del %i porciento\n", humedad_del_hogar);
printf("la luz del ambiente es del %i porciento\n", luz_del_ambiente);

}


/*
* Nombre de la función: sistema_estado_del_hogar
* Tipo de función: void
* Parámetros: 
* Dato de retorno: no retorna ningun dato ya que es una funcion void
* Descripción de la función: esta funcion permite al usuario ver el estado completo del hogar 
*
*/

void sistema_estado_del_hogar(){

if(luz_del_ambiente<30){
printf("luces encendidas\n");                                    
}
if(luz_del_ambiente>30){
printf("luces apagadas\n");                                   
}

if(luz_del_ambiente<30){
printf("persianas abajo\n");                                   
}
if(luz_del_ambiente>30){
printf("persianas arriba\n");                                    
}

if(temperatura_del_hogar>22){
printf("aire acondicionado encendido temperatura\n");                                   
}
if(temperatura_del_hogar<18){
printf("aire acondicionado encendido temperatura\n");                                   
}
if((temperatura_del_hogar>=18) && (temperatura_del_hogar<=22)){
printf("aire acondicionado apagado temperatura\n");                                   
}

if(humedad_del_hogar<50){
printf("aire acondicionado encendido humedad\n");                                    
}
if(humedad_del_hogar>60){
printf("aire acondicionado encendido humedad\n");                                    
}
if((humedad_del_hogar>=50) && (humedad_del_hogar<=60)){
printf("aire acondicionado apagado humedad\n");                                   
}
  
}


/* 
break rompe un bucle
strcmp devolverá 0 si las cadenas son iguales. En caso de que la primera sea “menor” que la segunda, devolverá un número negativo, y finalmente si la primera es mayor que la segunda, devolverá un número positivo
system Sirve para ejecutar subprocesos o comandos del sistema operativo. «system» permite ejecutar a su vez otras funciones como: «cls», «dir» o «pause»

*/