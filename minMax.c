/*
* Arquivo: minMax.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 3
*/

#include <stdio.h>

int menormaior(float * vetor, int n, float menor, float maior);

int main(void){
    int n,menor,maior, resultado;

    printf("Diga com quantos termos deseja trabalhar: ");
    scanf("%d", &n);

    float vetor[n];
    for(int i=0; i < n; i++) {
        printf("Diga os termos do vetor: ");
        scanf("%f", vetor + i);
    }
    return 0;
}

int menormaior(float * vetor,int n, float menor,float maior){
    int i = 0;
    menor = vetor[0];
    maior = vetor[5];

    for(i; i<= n; i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    printf("%g %g", menor, maior);
    }
}