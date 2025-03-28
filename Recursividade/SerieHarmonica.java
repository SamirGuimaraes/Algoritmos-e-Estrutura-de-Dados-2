/*
 * Implemente um método recursivo que receba como entrada um número inteiro 
 * positivo N e retorne o seguinte cálculo: 
 *     1 + 1/2 + 1/3 + 1/4 + 1/5 + ... + 1/N
 */

package Recursividade;
import java.util.Scanner;

public class SerieHarmonica {

    public static double soma(double n){

        if (n == 1.0)
            return n;
        else    
            return 1.0/n + soma(n-1.0);
    }

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite o número até o qual deseja somar a série harmônica: ");
        double n = sc.nextDouble();
        sc.close();


        System.out.println("A soma da série harmônica até o número " +n+ " corresponde a: " +soma(n));
    }

}
