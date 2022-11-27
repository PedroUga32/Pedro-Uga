/*
* Arquivo: divisores.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 2
*/

#include <stdio.h>

int main(void){

    int numero, i; 
    printf("Digite um número e saiba quem são seus divisores!!!: ");
    scanf("%d", &numero);

    for(i = 1; i <numero; i++){
        if (numero%i == 0)
        {
            printf("%d, ", i);
        }       
    }
    printf("%d ", numero);
    return 0;
}