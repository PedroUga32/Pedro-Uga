/*
* Arquivo: base.c
* Data Criação: 03/nov/2022
* Autor: Pedro Uga 
* Lab 1
*/
#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d + %d = %d\n",x, y, x+y);
    printf("%d - %d = %d\n",x, y, x-y);
    printf("%d * %d = %d\n",x, y, x*y);
    printf("%d / %d = %d\n",x, y, x/y); 
    printf("%d %% %d = %d\n", x, y , x%y);
    return 0;
}