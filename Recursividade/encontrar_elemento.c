// Crie um programa que contenha uma função recursiva para 
// encontrar o menor elemento em um vetor.

#include <stdio.h>
#include <stdlib.h>

int encontrar_elemento(int vetor[], int tamanho){

    if (tamanho == 0)
        return vetor[0];

    int menor_elemento = encontrar_elemento(vetor, tamanho - 1);

    if (vetor[tamanho - 1] < menor_elemento) 
        return vetor[tamanho - 1];
    else 
        return menor_elemento;
}

int main(int argc, char const *argv[])
{
    int tamanho;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    
    for (int i = 0; i < tamanho; i++){
        printf("Informe o valor da posição %dº do vetor: ", (i+1));
        scanf("%d", &vetor[i]);
    }
    
    printf("Vetor Gerado: \n");
    for (int i = 0; i < tamanho; i++){
        printf("-%d-", vetor[i]);
    }
    

    printf("\nO menor elemento do vetor corresponde a: %d", encontrar_elemento(vetor, tamanho));
    return 0;
}
