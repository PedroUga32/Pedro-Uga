#include <stdio.h>
#include <stdlib.h>

int Hailstone (int numero)
    while (numero != 1)
    {
        if (numero % 2 == 0) {
            numero = numero/2;
        }
        else {
            numero = (3 * numero) + 1;
        }
        return numero;
    }

int main (void)
{
  int numero, soma;

  printf("Escolha um número para iniciar a sequência de Hailstone: ");
  scanf("%d", &numero);
  soma = Hailstone(numero);
  printf("%d", soma);

  return 0;
}