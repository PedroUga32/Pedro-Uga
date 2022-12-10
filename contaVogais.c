/*
* Arquivo: contaVogais.c
* Data Criação: 08/dez/2022
* Autor: Pedro Uga 
* Lab 4
*/

#include <stdio.h>
#include <string.h>
#define n 1024

int contarVogais(char palavra[n]) {
    char vogais[] = "aeiouAEIOU";
    int numVogais = 0, i, j;

    for (i = 0; palavra[i] != '\0'; i++) {
        for (j = 0; vogais[j] != '\0'; j++) {
            if (vogais[j] == palavra[i]) {
                numVogais++;
            }
        }
    }

    printf("%d",numVogais);
}

int main() {

    char palavra[n];
    gets(palavra);
    contarVogais(palavra);
    return 0;
}