/*
* Arquivo: quaisDiv.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 3
*/

#include <stdio.h>

void identifica_dividores(int * vetor, int tamanho, int referencia);

int main(void) {
    int n, ref;
    printf("Quantos elementos? ");
    scanf("%d", &n);
    int vetor[n]; // C99 only!! variable length array
    for(int i = 0; i < n; i++) {
        printf("Informe o %dº elemento: ", i+1);
        scanf("%d", vetor+i);
    }
    printf("Escolha o número de referência: ");
    scanf("%d", &ref);
    identifica_dividores(vetor, n, ref);
    return 0;
}

void identifica_dividores(int * vetor, int tamanho, int referencia) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
        if(referencia % vetor[i] == 0)
            printf("#");
        printf(" ");
    }
    printf("\n");
}