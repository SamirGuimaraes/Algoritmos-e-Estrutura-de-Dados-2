// Faça uma função recursiva que calcule o valor da série S descrita a seguir para um valor
// n > 0 a ser fornecido como parâmetro para a mesma.
// S = 2 + 5/2 + 10/3 + ... + (1 + n²)/n

#include <stdio.h>

double soma(int n){
    if (n == 1)
        return 2.0;
    return ( (1.0 + n*n ) /n) + soma(n - 1);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Informe um número para soma da série recursiva - (1+n²)/n: ");
    scanf("%d", &n);

    printf("A soma da série no %dº termo corresponde a: %.2f", n, soma(n));
    return 0;
}
