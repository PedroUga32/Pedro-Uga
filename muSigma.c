/*
 *Arquivo:muSigma.c
 *Data criaçã:01/dez/2022
 *Autor: Yan Invernizzi
*/
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float soma(float * vetor, int tamanho);
float variancia (float * vetor, int tam);


int main(void) {
    int n;
    printf("Quantos elementos? ");
    scanf("%d", &n);
    float vetor[n]; // específico do C99
    for(int i = 0; i < n; i++) {
        printf("Informe elemento %d: ", i+1);
        scanf("%f", vetor + i);
    }
    printf("A media =  %g e devio = %g",soma(vetor,n)/n,sqrt(variancia(vetor,n)));

    
}

float soma(float * vetor, int tamanho) {
    float s = 0;
    for(int i = 0; i < tamanho; i++) 
        s += vetor[i];
    return s;
}
float variancia (float * vetor, int tam) {
    float sum = 0.0;
    float som = 0.0;
    float media = soma(vetor,tam)/tam;

    int y = 0;

    for(y;y<tam;y++)
    {
        som= vetor[y]- media;
        sum += (som*som);
    }
    
    return sum/tam;