// Dado um número n na base decimal, escreva uma função 
// recursiva que converte este número para binário.

#include <stdio.h>

void numero_binario(int n){
    if (n > 1) {
        numero_binario(n / 2);
    }
    printf("%d", n % 2);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Informe um número binário para descobrir seus correspondente em decimal: ");
    scanf("%d", &n);

    printf("O número %d em binário corresponde em decimal a:", n) ;
    numero_binario(n);
    return 0;
}
