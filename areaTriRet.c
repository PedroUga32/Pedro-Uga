/*
* Arquivo: areaTriRet.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 2
*/

#include <stdio.h>

int main(){

    float xA, xB, xC,yA,yB,yC,area;

    printf("De as coordenadas no ponto A e B: ");
    scanf("%f %f %f %f", &xA, &yA,&xB,&yB);
    xC = xB;
    yC = yA;

    area = ((xC-xA)*(yB-yC))/2;

    printf("%g", area);

    return 0;
}