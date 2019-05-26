#include<stdio.h>
#include<string.h>

main(){
	char exp[1000];
	int i=0, j,k,l, o;
	int p1, p2, p3;
	
	while(scanf("%s", &exp)!=EOF){
		p1=0;
		p2=0;
		p3=0;
		for(o=0;o<strlen(exp);o++){
			if(exp[o]=='('){
				p1++;
			}
		}
		
		for(l=0;l<strlen(exp);l++){
			if(exp[l]==')'){
				p2++;
			}
		}
		for(j=0;j<strlen(exp);j++){
			if(exp[j]=='('){
				for(k=j;k<strlen(exp);k++){
					if(exp[k]==')'){
						p3++;
						exp[k]=='0';
						break;
					}
				}
			}
			
		}
		if(p1==p2 && p1==p3 ){
			printf("correct\n");
		}
		else{
			printf("incorrect\n");
		}
		
		i++;
	}
}