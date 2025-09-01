#include <stdio.h>

int main(){

    float salario = 1375.25;
    float const percentual = 1.1;

    float novoSalario = salario * percentual;

    printf("O valor do novo salario e: %f\n",novoSalario);

    return 0;


}