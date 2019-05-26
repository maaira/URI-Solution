//Bazinga
#include <stdio.h>
#include <string.h>

main() {
	int cTest, counter=0;
	char sheldon[10], raj[10];
 
    scanf("%d", &cTest);
    
    do{
    	scanf("%s %s", sheldon,raj);
    	if(strcmp(sheldon,raj)==0){
    		printf("Caso #%d: De novo!\n", counter+1);
    	}
    	else if(sheldon[2]=='p' && raj[2]=='d' ){
    		printf("Caso #%d: Bazinga!\n", counter+1);
    	}
    	else if(sheldon[2]=='p' &&  raj[0]=='S'){
    		printf("Caso #%d: Bazinga!\n", counter+1);
    	}
    	else if(sheldon[0]=='t' && raj[2]=='p'  ){
			printf("Caso #%d: Bazinga!\n", counter+1);
		} 
		else if(sheldon[0]=='t' && raj[0]=='l' ){
			printf("Caso #%d: Bazinga!\n", counter+1);
		}			 	
    	else if(sheldon[0]=='l' && raj[0]=='S'  ){
			printf("Caso #%d: Bazinga!\n", counter+1);
		}
		else if(sheldon[0]=='l' && raj[2]=='p' ){
			printf("Caso #%d: Bazinga!\n", counter+1);
		}
		else if(sheldon[0]=='S' && raj[0]=='t'  ){
			printf("Caso #%d: Bazinga!\n", counter+1);
		}
		else if(sheldon[0]=='S' && raj[2]=='d' ){
			printf("Caso #%d: Bazinga!\n", counter+1);
		}	
		else if(sheldon[2]=='d' && raj[0]=='l'  ){
			printf("Caso #%d: Bazinga!\n", counter+1);
		}
		else if(sheldon[2]=='d' && raj[0]=='t' ){
			printf("Caso #%d: Bazinga!\n", counter+1);
		}
		else{
			printf("Caso #%d: Raj trapaceou!\n", counter+1);
		}
    	
		
	counter++;
	}while(counter<cTest);
}