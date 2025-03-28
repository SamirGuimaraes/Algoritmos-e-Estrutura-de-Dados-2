/*
 * **Exercício 5: Sequência de Pell**  
 * 
 * Os números de Pell são definidos pela seguinte recursão:  
 * 
 * Retorna 0 caso n = 0 \\ 
 * Retorna 1 caso n = 1 \\ 
 * Retorna 2p(n - 1) + p(n - 2) caso n > 2 
 * \end{cases} \]  
 * 
 * **Exemplo de números desta sequência:**  
 * 0, 1, 2, 5, 12, 29, 70, 169, 408, 985...  
 * 
 * --Tarefa:--
 *   
 * Implemente um método recursivo que:  
 * 1. Receba como parâmetro um número inteiro positivo \( N \);  
 * 2. Retorne o \( N \)-ésimo número da sequência de Pell.  
 * 
 * (Observação: A sequência de Pell é similar à de Fibonacci, mas cada termo é calculado como o dobro do termo anterior somado ao penúltimo termo.)*
 */

package Recursividade;
import java.util.Scanner;

public class NumerosDePell {

    public static int pell(int n){
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else 
            return 2*pell(n-1) + pell(n-2);
         
    }

    public static void main(String[] arg){

        Scanner sc = new Scanner(System.in);
        System.out.println("Digite um número para descobrir seu número de pell: ");
        int n = sc.nextInt();
        sc.close();

        System.out.println("O número " +n+ " tem seu número de pell igual: " + pell(n));
    }
}
