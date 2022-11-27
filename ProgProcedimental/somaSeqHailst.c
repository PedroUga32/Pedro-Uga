#include <stdio.h>
#include <stdlib.h>

int Hailstone (numero)
    int count = 1;
    while (numero != 1){
        if (numero % 2 == 0) {
            numero = numero/2;
        }
        else {
            numero = (3 * numero) + 1;
        }
        return numero;
    count = count + 1;
    }

int main (void){
  int numero, soma,count;

  printf("Escolha um número para iniciar a sequência de Hailstone: ");
  scanf("%d", &numero);
  soma = Hailstone(numero);
  printf("%d", soma);

  return 0;
}
