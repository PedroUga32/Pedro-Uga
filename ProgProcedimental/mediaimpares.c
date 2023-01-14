/*
* Arquivo: mediaimpares.c
* Data Criação: 12/jan/23
* Lab 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 1024

int soma(int * v1, int N1, int * v2, int N2, int * resultado);

int main(void) {
    int x1,x2,n=0,n2=0;
    printf("Quantidade do primeiro vetor:\n ");
    scanf("%d",&x1);

    printf("Quantidade do segunfo vetor:\n ");
    scanf("%d",&x2);

    //preenchendo com impares o primeiro vetor 
    int vetor[x1-1];
    if(x1>=1){
        vetor[0]=1;
    }
    
    for (int i = 1; i <x1; i++)
    {
        vetor[i]=vetor[n]+2;
        n=n+1;
        //printf("%d\n",vetor[i]);
    }
    // segundo vetor multiplos de 4
    int vet4[x2-1];
    if(x2 >= 1){
        vet4[0]=0;
    }
    for (int n1 = 1; n1 < x2; n1++)
    {
        vet4[n1]=vet4[n2]+4;
        n2=n2+1;
        //printf("%d\n",vet4[n1]);
    }
    //função para somar cujo so entra se x1 == x2
    if(x1 == x2){
        int resultado[x1];
        soma(vetor,x1,vet4,x2,resultado);
    }
    if(x1 != x2){
        printf("Nao e possivel efetuar o somatorio");
    } 
    return EXIT_SUCCESS;
}
int soma(int * v1, int N1, int * v2, int N2, int * resultado){
    for (int y = 0; y < N1; y++)
    {
        resultado[y]=v1[y]+v2[y];
        printf("%d ",resultado[y]);
    }
}