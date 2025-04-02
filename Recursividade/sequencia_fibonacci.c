// Faça uma função recursiva que calcule e retorne o Enésimo termo da sequênci Fibonacci. 
// Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89

#include <stdio.h> 

int fibonacci(int n){
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite um número para descobrir o enésimo termo da sequência de fibonacci: ");
    scanf("%d", &n);

    printf("O %dº termo da sequência de fibonacci corresponde a: %d", n, fibonacci(n));
    return 0;
}
