//Quadrado de Pares
import java.io.IOException;
import java.util.Scanner;

public class Main {

    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        long n = sc.nextInt(); 
        
        for(int i = 2; i<= n;i+=2 ){
            
            System.out.printf("%d^2 = %.0f\n",i,(Math.pow(i,2)));
            
        }
    }
    
}