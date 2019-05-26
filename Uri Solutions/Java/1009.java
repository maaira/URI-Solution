//Salario com Bonus
import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        
        String name = sc.next();
        
        double salary = sc.nextDouble();
        
        double sales = sc.nextDouble();
 
        System.out.printf("TOTAL = R$ %.2f\n",salary + sales * 0.15);
 
    }
 
}