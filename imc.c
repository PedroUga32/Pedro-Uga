/*
* Arquivo: imc.c
* Data Criação: 03/nov/2022
* Autor: Pedro Uga 
* Lab 1
*/
#include <stdio.h>
#include <stdint.h>

int main(int argc, char** argv){

    float peso=0.0, imc=0,altura=0;
    scanf("%f",&peso);
    scanf("%f",&altura);

    imc = (peso)/(altura*altura);

    if(imc<16){
        printf("%0.2f Perigo de vida\n", imc);
    }
    if(imc>=16 && imc<17){
        printf("%0.2f Muito abaixo do peso\n", imc);
    }
    if (imc>=17 && imc<18,5){
        printf("%0.2f Abaixo do peso\n", imc);
    }
    if (imc>=18,5 && imc<25){
        printf("%0.2f Peso normal\n", imc);
    }
    if (imc>=25 && imc<30){
        printf("%0.2f Acima do peso\n", imc);
    }
    if (imc>=30 && imc<35){
        printf("%0.2f Obesidade grau I\n", imc);
    }
    if (imc>=35 && imc<40){
        printf("%0.2f Obesidade grau II\n", imc);
    }
    if (imc>=40){
        printf("%0.2f Obesidade grau III\n", imc);
    }
return 0;
}