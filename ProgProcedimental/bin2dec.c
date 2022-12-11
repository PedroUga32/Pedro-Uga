/*
* Arquivo: bin2dec.c
* Data Criação: 08/dez/2022
* Autor: Pedro Uga 
* Lab 4
*/

#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char bin[100];
    unsigned long dec = 0;
    int i = 0;
    int s;

    fgets( bin, sizeof(bin), stdin);
    s = strlen( bin );
    while( s-- ) {
        if( bin[s] == '0' || bin[s] == '1' ) {
            dec = dec + pow(2, i++) * (bin[s] - '0');
        }
    };
    printf("%u", dec);
    return 0;
}