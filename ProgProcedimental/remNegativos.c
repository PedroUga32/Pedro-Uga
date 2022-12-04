/*
* Arquivo: remNegativos.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 3
*/

#include <stdio.h>

int main(){

    int n, tam = 0;
    int acum = 0;
    printf("Digite a quantidade termos do  vetor: ");
    scanf("%d", &n);
    int vetor[n];


    for(int i=0; i < n; i++) {
        printf("Numero: ", i+1);
        scanf("%d", vetor+i);  
        if(vetor[i]>= 0)
            acum += 1;
    }

    int res[acum];
    tam = acum;

    if(!acum){
        printf("vazio ");
    }
    else{
        acum = 0;
        for(int i=0; i < n; i++) {
            if(vetor[i]>=0){
                res[acum] = vetor[i];
                acum += 1;
            }
        }
    }

    for(int i=0; i < tam; i++) {
        if(i+1 == tam){
            printf("%d ", res[i]);
            break;
        }
        printf("%d, ", res[i]);
    }
return 0;
}
