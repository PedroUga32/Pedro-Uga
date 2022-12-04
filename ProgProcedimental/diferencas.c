/*
* Arquivo: diferencas.c
* Data Criação: 01/dez/2022
* Autor: Pedro Uga 
* Lab 3
*/

#include <stdio.h>

void iniciar_vetor(float * vetor, int tam);
void printar_vetor(float * vetor, int tam );
void vetor_resposta(float * vetor_analisado, float * vetor_res, float tam_v_r);
float min_vetor(float * vetor, int tam);
float max_vetor(float * vetor, int tam);

int main(int argc, char** argv){
    int n, tam_resp;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);
    tam_resp = n - 1;
    float vetor[n], vetor_r[tam_resp]; // so funciona no c99
    iniciar_vetor(vetor, n);
    vetor_resposta(vetor, vetor_r, tam_resp);
    printar_vetor(vetor_r, tam_resp);
    printf(" Minimo: %g", min_vetor(vetor_r, tam_resp));
    printf(" Maximo: %g", max_vetor(vetor_r, tam_resp));
return 0;
}

void iniciar_vetor(float * vetor, int tam){
    printf("Informe os elementos do vetor: \n");
    for(int i = 0; i < tam; i++ ){
        scanf("%f", &vetor[i]); 
    }

}

void printar_vetor(float * vetor, int tam ){
    printf("%g", vetor[0]);
    for(int i = 1; i < tam; i++ ){
        printf(", %g", *(vetor + i));  
    }

}

void vetor_resposta(float * vetor_analisado, float * vetor_res, float tam_v_r){
    
    for(int i = 0; i < tam_v_r; i++ ){
        vetor_res[i] = *(vetor_analisado + (i + 1)) - *(vetor_analisado + i);

    }
}

float min_vetor(float * vetor, int tam){
    float menor;
    menor = vetor[0];
    for(int i = 1; i < tam; i++){
        if(menor > vetor[i]){
            menor = vetor[i];
        }   
    }
    return menor;
}

float max_vetor(float * vetor, int tam){
    float max;
    max = vetor[0];
    for(int i = 1; i < tam; i++){
        if(max < vetor[i]){
            max = vetor[i];
        }   
    }
    return max ;
}