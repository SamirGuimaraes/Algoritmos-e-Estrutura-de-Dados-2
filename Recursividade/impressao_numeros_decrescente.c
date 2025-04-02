//  Faça uma função recursiva que receba um número inteiro positivo N e imprima 
// todos os números naturais de 0 até N em ordem decrescente.

#include <stdio.h>

void impressao(int numero){
    if (numero == 0)
        return printf("%d", numero);

    printf("%d", numero);
    impressao(numero-1);
}

int main(int argc, char const *argv[])
{
    int numero;
    printf("Digite um número para imprimir todos os seus antecessores em ordem decrescente: ");
    scanf("%d", &numero);

    printf("Os antecessores de %d corresponde a: \n", numero);
    impressao(numero);

    return 0;
}
