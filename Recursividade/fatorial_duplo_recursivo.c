// Faça uma função recursiva que receba um número inteiro positivo impar N e retorne o
// fatorial duplo desse número. O fatorial duplo é definido como o produto de todos os
// números naturais ımpares de 1 até algum número natural ımpar N. Assim, o fatorial
// duplo de 5 é:  5! = 1 * 3 * 5 = 15

#include <stdio.h>

int fatorial_duplo(int n){
    if (n == 1)
        return n;
    return n * fatorial_duplo(n-2);
}

int main(int argc, char const *argv[]){
    int n;
    do{
        printf("Informe um número IMPAR para descobrir seu fatorial duplo: ");
        scanf("%d", &n);
    }while(n%2 != 1 || n <= 0);
    
    printf("O fatorial duplo de %d corresponde a: %d", n, fatorial_duplo(n));
    return 0;
}