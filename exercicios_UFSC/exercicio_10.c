#include <stdio.h>

int main(){
    float x;
    float y;
    float const f = 10;

    x = 2 + 35 - 2 * f + 2.75;
    y = 2 + (35 - 2) * (f + 2.75);

    /*Sao diferentes pois no y eu priorizo as contas de soma e subtracao antes da multiplicacao*/

    printf("o valor de x e:%f\n e o valor de y e:%f\n",x,y);
    
    return 0;
}