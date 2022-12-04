/*
* Arquivo: minMax.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 3
*/

#include <stdio.h>

int main(){
    int n, max, min = 0;
    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);
    int vetor[n];

    for(int i=0; i < n; i++) {
        printf("Seu numero: ", i+1);
        scanf("%d", vetor+i);   
    }

    max = vetor[0];
    min = vetor[0];

    for(int i=0; i < n; i++) {
    if(vetor[i] > max)
        max = vetor[i];
    
    if (vetor[i]< min)
        min = vetor[i]; 
    }
    
     for(int i=0; i < n; i++) {
        if(vetor[i] == max)
            printf("%d> ", max);
        if(vetor[i] == min)
            printf("%d< ", min);
        if(vetor[i] != max && vetor[i] != min)
            printf("%d ", vetor[i]);
    }

return 0;
}