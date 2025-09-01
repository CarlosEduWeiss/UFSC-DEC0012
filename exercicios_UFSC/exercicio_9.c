#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int resultado;
    
    scanf("%i",&numero1);
    scanf("%i",&numero2);

    resultado = numero1 >= 0 && numero1 <= 10 || numero2 >= 0 && numero2 <= 10;

    printf("o resultado e %i",resultado);




}