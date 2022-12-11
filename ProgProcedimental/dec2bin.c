/*
* Arquivo: dec2bin.c
* Data Criação: 08/dez/2022
* Autor: Pedro Uga 
* Lab 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binario(int n ){
    if(n !=0){
        binario(n/2);
        printf("%d", n%2);
    }
}

int main() {
    int n; 

    printf("Digite o numero: ");
    scanf("%d", &n);

    binario(n);

    return 0;
}