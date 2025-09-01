#include <stdio.h>

int main(){
    /*pi r*/
    float raio; 
    float pi = 3.14;
    float calculo;
    float raioQuad;

    scanf("%f",&raio);

    raioQuad = raio*raio;
    calculo = pi*raioQuad;

    printf("A area e:%i",calculo);

    return 0;
}