/*
* Arquivo: somaSeqHailst.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int Hailstone (numero,somatorio,x){
    somatorio = numero;
    while(numero > 1){
        if (numero % 2 == 0) {
            numero = numero/2;
        }
        else {
            numero = (3 * numero) + 1;
        }
        x = numero;
            if (true)
        {
            somatorio = somatorio + x;
        }
    }
    printf("%d ", somatorio);
}

int main (void){
    int numero,soma,x,somatorio;
    printf("Escolha um numero para iniciar a sequencia de Hailstone: ");
    scanf("%d", &numero);
    soma = Hailstone(numero);

  return 0;
}
