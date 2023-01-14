/*
* Arquivo: golomb.c
* Data Criação: 12/jan/23
* Lab 6
*/

#include <stdio.h>
#include <stdlib.h>

int fungolomb(int numero);
double media(int *v, int b, int a);

int main(int argc, char** argv){

    int *vetor, numero, a, b, aux;
    printf("a: ");
    scanf("%d%*c", &a);

    printf("b: ");
    scanf("%d%*c", &b);

    if(b < a) { aux = a; a = b; b = aux; };

    vetor = malloc (b+1 * sizeof (int ));

    for(int i=0; i<=b; i++){       
        v[i] = fun(i);
    }

    printf("primeiro: %d", vetor[a]);
    printf("último: %d", vetor[b]);
    printf("média: %lg", media(vetor, b, a));

    return 0;
}


int fungolomb(int numero){

    if(numero ==0){
        return 1;
    }
    
    return 1 + fungolomb(numero - fungolomb(fungolomb(numero-1)-1));
}

double media(int *v, int b, int a){
    double soma = 0;
    double resmedia;   

    for(int i=a; i<=b; i++){       
        soma = soma+v[i];
    }

    resmedia = soma/(b+1-a);
    return resmedia;
}