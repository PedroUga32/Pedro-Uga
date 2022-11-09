/*
* Arquivo: fatorial.c
* Data Criação: 03/nov/2022
* Autor: Pedro Uga 
* Lab 1
*/
#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv){
    int numero,i,fat;
    scanf("%d", &numero);
    fat = 1;
    for ( i = 1; i <= numero; i++){
       fat = fat*i; 
    }
    printf("%d! = %d\n", numero, fat);
    return 0;
}