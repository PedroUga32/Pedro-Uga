/*
* Arquivo: palindrono.c
* Data Criação: 08/dez/2022
* Autor: Pedro Uga 
* Lab 4
*/
#include <stdio.h>
#include <string.h>

int main(){
    char frase[100], invertida[100];
    int i, tamanho;
    
    printf("Digite a frase: ");
    gets(frase);

    for(i = strlen(frase)-1; i >= 0; i--);
    {
      invertida[strlen(frase)-1-i] = frase[i];
    }

    tamanho = strlen(frase);
    while(tamanho >= 0){
        if(frase[i] != frase[tamanho]){
            printf("Palindrono: Falso");
            break;
        }
        i++;
        tamanho--;
    }
    
    if(tamanho < 0){
        printf("Palindrono: Verdadeiro");
    }
    return 0;
}