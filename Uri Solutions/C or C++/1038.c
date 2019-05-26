//Lanche
#include <stdio.h>
 
int main() {
 
   int q, cod;
    
    
    scanf("%d %d", &cod, &q);
    
    switch(cod){
	
    	case 1:
    		printf("Total: R$ %.2f\n", q*4.00);
    		break;

        case 2:
    		
    		printf("Total: R$ %.2f\n", q*4.50);
	    	break;
		case 3:
    		
    		printf("Total: R$ %.2f\n", q*5.00);
    		break;
    	case 4:
    		
    		printf("Total: R$ %.2f\n", q*2.00);
    		break;
    	case 5:
    		
    		printf("Total: R$ %.2f\n", q*1.50);
    		break;
    	}
 
    return 0;
}