// Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
//  𝑆(𝑛) = 1^3 + 2^3 + ⋯ + 𝑛^3

#include <stdio.h>

int soma_cubos(int numero) {
    if (numero == 1) 
        return numero;
    return (numero * numero * numero) + soma_cubos(numero - 1);
}

int main() {
    int numero;
    printf("Insira um número para descobrir a soma dos N primeiros cubos: ");
    scanf("%d", &numero);

    printf("A soma dos %d primeiros cubos corresponde a: %d\n", numero, soma_cubos(numero));
    return 0;
}