
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, n, t1 = 0, t2 = 1, nextTerm;
    double x, pi, cosx, term;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    pi = 3.14159265358979323846;
    x = x * pi;
    cosx = 1;
    term = 1;
    for (i = 1; i <= n; ++i)
    {
        term = term * (-1) * x * x / (2 * i * (2 * i - 1));
        cosx = cosx + term;
    }
    printf("%lf", cosx);
    return 0;
}
