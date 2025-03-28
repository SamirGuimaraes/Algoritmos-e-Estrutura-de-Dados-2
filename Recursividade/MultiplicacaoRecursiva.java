/*
 * Implemente um método recursivo que receba como entrada dois 
 * números inteiros x e k e retorne o valor da operação x k. 
 * Não utilize o método Math.pow() do Java. Utilizeapenas multiplicação. 
*/

package Recursividade;
import java.util.Scanner;

public class MultiplicacaoRecursiva {

    public static int multiplicacao(int base, int expoente){
        if (expoente == 1)
            return base;
        return base * multiplicacao(base, expoente-1);

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Digite a base da multiplicação: ");
        int base  = sc.nextInt();
        System.out.println("Agora digite o expoente: ");
        int expoente = sc.nextInt();
        sc.close();

        System.out.println("A base " +base+ " elevada a " +expoente+ " corresponde a: " +multiplicacao(base, expoente));
        
    }
}
