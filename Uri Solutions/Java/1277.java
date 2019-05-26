//Pouca Frequencia
import java.util.ArrayList;
import java.util.Scanner;

public class Main {    

    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int cases = Integer.parseInt(sc.nextLine());
        String[] nomes;
        String[] faltas;
        
        
        for(int i=0;i<cases; i++){
            ArrayList array = new ArrayList();
            int qtd=Integer.parseInt(sc.nextLine());
            int cont=0;
            nomes= sc.nextLine().split(" ");
            
            faltas=sc.nextLine().split(" ");
            
             for(int j=0; j<nomes.length;j++){
                int p =0, f=0, m=0, present;
                for(int w=0 ;w < faltas[j].length();w++){
                    if(faltas[j].charAt(w)=='P')p++;
                    if(faltas[j].charAt(w)=='A')f++;
                                        
                }
                present=p+f;
                float result=(float)(p)/(float)(present);
                boolean key=false;
                if(result < 0.75f){
                   array.add(nomes[j]);
                   key=true;
                   
                }cont++;
            }
        for (int a = 0; a < array.size(); a++) {
			System.out.print(array.get(a));
                        if(a>=0 && a+1==array.size())System.out.printf("");
                        else System.out.printf(" ");
		}     
        System.out.printf("\n");
        
        }
    }

   
    
}
