//Par ou Impar
import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        
        long n = sc.nextInt(); 
        
        for(int i = 0; i< n; i++ ){
            int num=sc.nextInt();
            if(num==0)System.out.println("NULL");
            else if(num>0 && num%2==0)System.out.println("EVEN POSITIVE");
            else if(num<0 && num%2==0)System.out.println("EVEN NEGATIVE");
            else if(num>0 && num%2!=0)System.out.println("ODD POSITIVE");
            else if(num<0 && num%2!=0)System.out.println("ODD NEGATIVE");
 
    }
 
}
}