#include <stdio.h>

int main(){
    char sexo;
    float altura,pesoIdeal;

    printf("Diga sua altura: ");
    scanf("%f",&altura);


    printf("Ola, para calcular o seu peso ideal precisamos saber o seu sexo: Digite H para homem e M para mulher.\n");
    scanf(" %c",&sexo);

    
 

    if(sexo == 'H' || sexo == 'h'){
    
        pesoIdeal = 72.7 * altura - 58;
        printf("O seu peso Ideal e:%f\n",pesoIdeal);
        
    }else if(sexo == 'M' || sexo == 'm'){

        pesoIdeal = 62.1 * altura - 44.7;
        printf("O seu peso Ideal e:%f\n",pesoIdeal);

    }else{
        printf("ERRO AO INDENTIFICAR GENERO.");
    }

}


