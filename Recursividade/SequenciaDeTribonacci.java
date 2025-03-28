/*
 * Os números Tribonacci são definidos pela seguinte recursão:
 *
 * 
 * retorna 0 caso n = 0 \\ 
 * retorna 0 caso n = 1 \\ 
 * retorna 1 caso n = 2 \\ 
 * retorna (n - 1) + f(n - 2) + f(n - 3) & \text{se } n > 2 
 *
 *
 *   --Tarefa:--  
 * Implemente um método recursivo que:  
 * 1. Receba como parâmetro um número inteiro positivo \( N \);  
 * 2. Mostre e retorne o \( N \)-ésimo número da sequência de Tribonacci.  
 *
 * (Observação: A sequência de Tribonacci é uma generalização da sequência de Fibonacci, onde cada termo é a soma dos três termos anteriores.)
 */

package Recursividade;
import java.util.Scanner;

public class SequenciaDeTribonacci {

    public static int tribonacci(int numero){
        if (numero == 0 || numero == 1)
            return 0;
        else if (numero == 2)
            return 1;
        else 
            return tribonacci(numero - 1) + tribonacci(numero - 2) + tribonacci(numero - 3);
    }

    public static void main(String[] args) {
         
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite um valor para descobri sua sequência de tribonacci: ");
        int numero = sc.nextInt();
        sc.close();

        System.out.println("A sequência de tribonacci de " +numero+ " corresponde a: " + tribonacci(numero));
    }
}
