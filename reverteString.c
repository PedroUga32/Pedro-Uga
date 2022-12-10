/*
* Arquivo: reverteString.c
* Data Criação: 08/dez/2022
* Autor: Pedro Uga 
* Lab 4
*/

#include <stdio.h>
#include <string.h>
#define n 100


void upper(char* str){
    int i;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        
    }
}

int main(void){
    char entrada[n];
    char saida[n];
    int i;
    printf("Digite a frase a ser analisada: ");
    gets(entrada);

    for ( i = (strlen(entrada)-1) ; i >= 0; i--)
    {
        saida[strlen(entrada)-1-i] = entrada[i];
    }
    upper(saida);
    printf("%s", saida);

    return 0;
}
