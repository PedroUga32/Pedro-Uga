/*
 * Arquivo: contaCaracteres.c
 * Data criação: 08/12
 * Autor: Pedro Uga
 * Lab 4
 */
#include <stdio.h>
#include <string.h>

#define n 1000

int main(int argc, char** argv){
	
	char frase[n];

    printf("Digite uma frase: ");
    fgets(frase,n,stdin);

    if(frase[strlen(frase) - 1]=='\n'){
        frase[strlen(frase)-1] = '\0';
    }    

    int i = 0, letra = 0, digitos = 0, outros = 0;
    while(0==0){
        if(frase[i] == 0){
            break;
        }else if((frase[i]>64 && frase[i]<91) || (frase[i]>96 && frase[i]<123)){
            letra += + 1;
        }else if(frase[i]>47 && frase[i]<58){
            digitos = digitos +1;
        }else{
            outros += +1;
        }
        i += + 1;
    }

    printf("letras: %d digitos: %d outros: %d", letra, digitos, outros);
	
    return 0;
}