/*
* Arquivo: aleatorios.c
* Data Criação: 12/jan/23
* Lab 6
*/

#include <stdio.h>
#include <stdlib.h>

double media(int *v, int n);
int max(int *v, int n);
int min(int *v, int n);

int main(int argc, char** argv){
	
    int *v, numero;

    printf("tamanho do vetor:");
    scanf("%d%*c", &numero);

    v = malloc (numero * sizeof (int ));
    srand(n);

    for (int i = 0; i<numero;i++){
        v[i] = rand() % numero;
    }

    printf("min: %d\n", min(v, numero));
    printf("max: %d\n", max(v, numero));
    printf("média: %lg\n", media(v, numero));

	return 0;
}

int max(int *v, int numero){
    int maior = v[0];
    for(int i=0; i<numero; i++){        
        if (maior<v[i]){
            maior = v[i];
        }
    }
    return maior;
}

int min(int *v, int numero){
    int menor = v[0];
    for(int i=0; i<numero; i++){        
        if (menor>v[i]){
            menor = v[i];
        }
    }
    return menor;
}

double media(int *v, int numero){
    double soma = 0;
    double resmedia;   

    for(int i=0; i<numero; i++){       
        soma = soma+v[i];
    }
    resmedia = soma/numero;
    return r;
}

