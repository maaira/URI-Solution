//Animal
#include<stdio.h>
#include<string.h>

main(){
	char p1[20], p2[20], p3[20];
	
	scanf("%s", p1);
	scanf("%s", p2);
	scanf("%s", p3);
	
	if( p1[0]=='v'){
		if(p2[0]=='a'){
			if(p3[0]=='c'){
			printf("aguia\n");	
			}
			else if(p3[0]=='o'){
				printf("pomba\n");	
			}
		}
		else if(p2[0]=='m'){
			if(p3[0]=='h'){
				printf("vaca\n");	
			}
			else if(p3[0]=='o'){
				printf("homem\n");	
			}
		}
				
	}
	else if(p1[0]='i'){
		if(p2[0]=='i'){
			if(p3[0]=='h' && p3[2]=='m'){
			printf("pulga\n");	
			}
			else if(p3[0]=='h'&& p3[2]=='r'){
				printf("lagarta\n");	
			}
		}
		else if(p2[0]=='a'){
			if(p3[0]=='h'){
				printf("sanguessuga\n");	
			}
			else if(p3[0]=='o'){
				printf("minhoca\n");	
			}
		}
		
	}
	

}
