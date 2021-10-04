#include <stdio.h>

int numero1;
int numero2;
int numero3;
int iguales;

int main(){
    printf("ingrese el primer numero\n:");
    scanf("%d", &numero1);
    printf("ingrese el segundo numero\n");
    scanf("%d", &numero2);
    printf("ingrese el tercer numero\n");
    scanf("%d", &numero2);

    iguales=numero1 = numero2 = numero3;



    if((numero1 == numero2) && (numero2 == numero3)){
        printf("los numeros son iguales\n");

    }else if ((numero1 > numero2) && (numero1 >= numero3)){
        printf("%d el mayor es\n", numero1);

    }else if ((numero3 > numero2) && (numero3 >= numero1)){
        printf("%d el mayor es\n", numero3);

    }else if ((numero2 > numero1) && (numero2 >= numero3)){
        printf("%d el mayor es\n", numero2);

    }else if ((numero2 > numero3) && (numero2 >= numero1)){
        printf("%d el mayor es\n", numero2);

    }else if ((numero2 > numero3) && (numero2 >= numero1)){
        printf("%d el mayor es\n", numero2);

    }else if ((numero3 > numero1) && (numero3 >= numero2)){
        printf("%d el mayor es\n", numero3);

    }else if ((numero1 > numero3) && (numero1 >= numero2)){
        printf("%d el mayor es\n", numero1);
    }
    
    return 0;
    

}