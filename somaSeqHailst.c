#include <stdio.h>
#include <stdlib.h>

int Hailstone (int n)
{
  if (n % 2 == 0) {
    return n = n/2;
  }
  else {
    return n = (3 * n) + 1;
  }
  return n;
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