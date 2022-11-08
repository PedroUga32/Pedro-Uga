/*
* Arquivo: somaDvisores.c
* Data Criação: 03/nov/2022
* Autor: Pedro Uga 
* Lab 1
*/
#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv){

    int numero = 0;
    int soma = 0;
    printf("Informe um número inteiro\n");
    scanf("%d",&numero);

    soma = 1; 
    for (int i=2 ; i <= (numero/2+1) ; i++ ) {
        if ( numero % i == 0 ) {
            soma += i;
        }
  }
  printf("A soma dos divisores é %d\n",soma + numero);
return 0;
}