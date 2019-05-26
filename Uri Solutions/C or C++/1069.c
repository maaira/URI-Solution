//Diamantes e Areia
#include<stdio.h>
#include<string.h>

main(){
	int i=0,n, j,k, cont;
	char tex[1001];
	int maior=0, menor=0;
	memset(tex, '\0', 1000);
	scanf("%d", &n);
	
	while(i<n){
		cont=0;
		scanf("%s", &tex);
		
		
		for(j=0;j<strlen(tex);j++){
			if(tex[j]=='<'){
				for(k=j; k<strlen(tex);k++){
					if(tex[k]=='>'){
						
						cont++;
						tex[k]='.';
						
						break;
					}
					
				}
			}
			
		}
		
	
		printf("%d\n", cont);
		
		
		i++;
	}
}