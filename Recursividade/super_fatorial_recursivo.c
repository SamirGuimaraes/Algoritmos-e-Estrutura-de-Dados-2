//  Faça uma função recursiva que receba um número inteiro positivo N 
// e retorne o superfatorial desse número. O super-fatorial de um 
// número N é definido pelo produto dos N primeiros fatoriais de N. 
// Assim, o super-fatorial de 4 é:
// 𝑠𝑓(4) = 1! ∗ 2! ∗ 3! ∗ 4! = 288

#include <stdio.h>

int fatorial(int n){
    if (n == 1)
        return 1;
    return n * fatorial(n-1);
}
int super_fatorial(int n){
    if (n == 1)
        return 1;
    return fatorial(n) * super_fatorial(n-1);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Informe um número pra descorir o seu super fatorial: ");
    scanf("%d", &n);

    printf("O super fatorial de %d corresponde a: %d", n, super_fatorial(n));
    return 0;
}