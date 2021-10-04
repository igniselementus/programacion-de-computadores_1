#include <stdio.h>
#include <stdlib.h>

int valor;
int puntos;
int codigo;
int eleccion;
int si=1;
int no=0;

int main() {

  printf("ingrese el valor del producto \n");
  scanf("%d", &valor);

  printf("puede usted ingresas sus puntos en pesos ?\n",puntos);
  scanf("%d", &puntos);
  printf("ingrese el codigo del producsto \n");
  scanf("%d", &codigo);

    if(valor <= puntos){
        printf("tiene puntos sufientes para realizar la compra, [si](1) [no](0) \n");
        scanf("%d", &eleccion);
 
        if(eleccion == 1){
            printf("muchas gracias por la compra\n");
            puntos= puntos-valor;
            printf("le restan %d",puntos);


        }
        else{
            printf("usted deber en efectivo el valor de %d\n",valor);

            if(100<=codigo<200){
                if(valor<10000){
                    puntos = puntos + (valor/100);
                    printf("ahora tienes %d",puntos);
                }else{
                    puntos = puntos + (valor/50);
                    printf("ahora tienes %d",puntos);
                }}else if(200 <= codigo < 300) {
                if(valor <= 10000){
                    puntos = puntos + (valor/50);
                    printf("ahora tienes %d",puntos);
                }else{
                    puntos = puntos + (valor/30);
                    printf("ahora tienes %d",puntos);
                }

            }

         }
    }
    else{
        printf("usted debe pagar %d\n",valor);
           if(100<=codigo<200){
                if(valor<10000){
                    puntos = puntos + (valor/100);
                    printf("ahora tienes %d",puntos);
                }else{
                    puntos = puntos + (valor/50);
                    printf("ahora tienes %d",puntos);
                }

            }else if(200 <= codigo < 300) {
                if(valor <= 10000){
                    puntos = puntos + (valor/50);
                    printf("ahora tienes %d",puntos);
                }else{
                    puntos = puntos + (valor/30);
                    printf("ahora tienes %d",puntos);
                }

            }


    }



 return 0;
}