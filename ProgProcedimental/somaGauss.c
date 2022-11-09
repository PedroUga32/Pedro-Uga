/*
* Arquivo: somaGauss.c
* Data Criação: 03/nov/2022
* Autor: Pedro Uga 
* Lab 1
*/
#include <stdio.h>

int main (int argc, char** argv){
    int n, soma;
    scanf("%d", &n);
    soma = ((1+n)*n)/2;
    printf("%d", soma);
    return 0;
}
