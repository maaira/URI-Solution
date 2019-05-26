//Intervalo 2
import java.io.IOException;
 
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner sc = new Scanner(System.in);
        long x = sc.nextInt();
        int i=0, out = 0, in = 0;
        do{
            int num = sc.nextInt();
            if(num>=10 && num<=20)in++;
            else out++;
            i++;
        }while(i<x);
        System.out.println(in+" in");
        System.out.println(out+" out");
 
    }
 
}