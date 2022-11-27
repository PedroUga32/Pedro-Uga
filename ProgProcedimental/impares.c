/*
* Arquivo: impares.c
* Data Criação: 24/nov/2022
* Autor: Pedro Uga 
* Lab 2
*/

#include <stdio.h>
#include <stdint.h>

int main(void){
    int menor,maior;
    printf("Digite o menor e o maior valor do intervalo analisado: ");
    scanf("%d %d", &menor, &maior);

    if(menor>maior){
        printf("Atenção o b deve ser maior que a!!");
    }

    else{for(menor; menor<=maior; menor++){
            if (menor % 2 != 0){
                printf("%d, ", menor);
            }
        }             
    }
    return 0;
}
