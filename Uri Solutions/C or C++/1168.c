//LED
#include<stdio.h>
#include<string.h>


main(){
	char x[100];
	int n, i=0, j=0;
	int soma=0;
	
	scanf("%d", &n);
	do{
		memset(x, '\0', 100);
		scanf("%s", x);
		for(j=0; j<strlen(x);j++){
				
			if(x[j]=='1'){
				soma=soma+2;
			}
			if(x[j]=='2' ){
				soma=soma+5;
			}
			if(x[j]=='3'){
				soma=soma+5;
			}
			if(x[j]=='4'){
				soma=soma+4;
			}
			if(x[j]=='5'){
				soma=soma+5;
			}
			if(x[j]=='6'){
				soma=soma+6;
			}
			if(x[j]=='7'){
				soma=soma+3;
			}
			if(x[j]=='8'){
				soma=soma+7;
			}
			if(x[j]=='9'){
				soma=soma+6;
			}
			if(x[j]=='0' ){
				soma=soma+6;
			}
					
		}
		printf("%d leds\n", soma);
		soma=0;		
		i++;	
	}while(i<n);
}