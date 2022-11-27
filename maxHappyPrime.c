/*
* Arquivo: maxHappyPrime.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 2
*/
#include <stdio.h>

int somaquadrados(numero);
int numfeliz(numeroi);
int primo(numero);
int maiorprimofeliz(numero);

int main(void)
{
    int numero, numeroprimofeliz;

    printf("Digite um número a ser avaliado: ");
    scanf("&d ", &numero);

    numeroprimofeliz = maiorprimofeliz(numero);

    if (numeroprimofeliz == 0)
    {
        printf("0***");
    }
    else
    {
        printf("%d ", numeroprimofeliz);
    }
    return 0;
}

int numfeliz(numeroi){
    int somadigitos;

    somadigitos = somaquadrados(numeroi);

    if (somadigitos == 1)
    {
        return 1;
    }
    else if(somadigitos == 4){
        return 0;
    }
    else
    {
        return numfeliz(somadigitos);
    }
}

int somaquadrados(numero){
    int soma = 0, digito;

    for(numero;numero>=1; numero = numero/10){
        soma = soma + ((numero%10)*(numero%10));
    }
    return soma;
}

int primo(numero){
    int i = 2;
    while (i<numero)
    {
        if (numero%i == 0)
        {
            return 0;
        }
        i = i +1;  
    }
    if (numero != 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int maiorprimofeliz(numero){
    for (numero;  numero>0; numero--)
    {
        if (primo(numero)& numfeliz(numero))
        {
            return numero;
        }
    }
    return 0;
} 