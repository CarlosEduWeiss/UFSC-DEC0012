#include <stdio.h>

int main(){
    int idade;


    printf("DIGITE UMA IDADE: ");
    scanf("%i", idade);

    if(idade >= 5 && idade <= 7){
        printf("Infantil A\n");

    }
    if(idade >= 8 && idade <= 10){
        printf("INFANTIL B\n");
    }
    if(idade >= 11 && idade <= 13){
        printf("juvenil A\n");
    }
    if(idade >= 14 && idade <= 17){
        printf("juvenil B\n");
    }
    if(idade >= 18){
        printf("Adulto\n");
    }
    return 0;

}