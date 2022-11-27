/*
* Arquivo: dist.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 2
*/
#include <stdio.h>
#include <math.h>

int main(void){
    float xA,yA,xB,yB;
    float resultado;

    scanf("%f %f", &xA,&yA);
    scanf("%f %f", &xB,&yB);

    resultado = sqrt(pow(xA-xB,2)+pow(yA-yB,2));

    printf("%g",resultado);

    return 0;
}