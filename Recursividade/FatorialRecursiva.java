/*
 * Este programa calcula o fatorial de um número usando recursividade: a função 
 * fatorial() chama a si mesma, reduzindo o problema (num * fatorial(num - 1)) 
 * até atingir o caso base (num == 1). O resultado é exibido após o usuário digitar um número.
 */

package Recursividade;
import java.util.Scanner;

public class FatorialRecursiva {

    public static int fatorial(int num){
        if (num == 0 || num == 1)
            return 1;
        else 
            return num * fatorial(num - 1);
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Informe o número que deseja descobrir seu fatorial: ");
        int num = sc.nextInt();

        sc.close();

        System.out.println("O fatorial de " +num+ " corresponde a: " + fatorial(num));
        
    }
}
