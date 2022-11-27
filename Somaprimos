#include <stdio.h>
#include <stdbool.h>

int eh_primo( n )
{
    int i = 0;

    if( n <= 1 )
        return 0;

    if( (n % 2 == 0) && (n > 2) )
        return 0;

    for( i = 3; i < n / 2; i += 2 )
        if( n % i == 0 )
            return 0;

    return 1;
}
int somar_primos( inicio, fim )
{
    int i = 0;
    int soma = 0;

    for( i = inicio; i <= fim; i++ )
        if( eh_primo(i) )
            soma += i;

    return soma;
}
int main( void )
{
    int numI, numF;
    printf("Diga o início e o fim do intervalo que será analisado!!!: ");
    scanf("%d %d", &numI, &numF);
    if (numI>numF)
    {
        printf("O segundo valor deve ser maior que o primeiro!!!");
    }
    
    printf( "%d ", somar_primos( numI, numF ) );
    return 0;
}