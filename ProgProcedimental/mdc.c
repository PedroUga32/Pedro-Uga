/*
* Arquivo: mdc.c
* Data Criação: 05/jan/20223
* Autor: Pedro Uga 
* Lab 5
*/

#include <stdio.h>

int mdc(int a, int b);

int main(void) {
    int nume1, nume2, respos;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &nume1, &nume2);
    respos = mdc(nume1,nume2);
    printf("Resultado: %d", respos);
    return 0; 
}
int mdc(int a, int b){
    if (a%b == 0)
    {
        return b;
    }
    else{
        return mdc(b, (a%b));
    }
}