//Cifra de César
#include<stdio.h>
#include<string.h>

main(){
	char frase[51];
	int i=0, j=0,cont=0, mov=0;
	
	scanf("%d", &cont);
	do{
		memset(frase, '\0', 51 );
		scanf("%s", frase);
		scanf("%d", &mov);
		for(j=0; j<strlen(frase); j++){
			
			if((frase[j]-mov)<65){
				frase[j]=frase[j]+26-mov;
			}
			else {
				frase[j]=frase[j]-mov;
				
			}
		}
			printf("%s\n", frase);
			
		i++;				
	}while(i<cont);
}