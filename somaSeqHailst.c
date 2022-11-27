#include <stdio.h>
#include <stdlib.h>

int Hailstone (numero){
    while(numero > 1){
        if (numero % 2 == 0) {
            numero = numero/2;
        }
        else {
            numero = (3 * numero) + 1;
        }
        printf("%d ", numero);
    }
}

int main (void){
  int numero, soma;

  printf("Escolha um numero para iniciar a sequencia de Hailstone: ");
  scanf("%d", &numero);
  printf("%d ", numero);
  soma = Hailstone(numero);

  return 0;
}
