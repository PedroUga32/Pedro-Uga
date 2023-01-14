/*
* Arquivo: somavetores.c
* Data Criação: 12/jan/23
* Lab 6
*/

#include <stdio.h>
#include <stdlib.h>
int impares( int a,int b);

int main(int argc, char** argv) {
    int a,b;
    
    printf("Digite quantidade: ");
    scanf("%d",&a);
    printf("Digite o numero inicial: ");
    scanf("%d",&b);
    int vetor[a-1];
    //ifs
    if (b%2 != 0)
    {
        vetor[0]=b;
    }
    if(b%2 == 0){
        vetor[0]=b+1; 
    }
    for (int i=1; i < a ; i++)
    {
        b=b+1;
        if (b%2 == 0)
        {
            vetor[i]=b+1;
            b=b+1;

        }        
        printf("%d\n",vetor[i]);
    }
    int n2,soma=0,media;
    for ( int n1 = 0; n1 < a; n1++)
    {
        
        n2= vetor[n1];
        soma = soma + n2;

    }
    
    printf("a media = %d\n",soma/a);
    printf("penultimo elemento = %d",vetor[a-2]);
    return 0;
}
int impares( int a,int b){
    int vetor[a-1];
    //ifs
    if (b%2 != 0)
    {
        vetor[0]=b;
    }
    if(b%2 == 0){
        vetor[0]=b+1; 
    }
    for (int i=1; i < a ; i++)
    {
        b=b+1;
        if (b%2 == 0)
        {
            vetor[i]=b+1;
            b=b+1;

        }
        printf("%d\n",vetor[i]);
    }
}