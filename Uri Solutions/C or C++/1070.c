//Seis Numeros Impares
#include <stdio.h>
 
int main() {
 
    int X, i=0, j=0;
	
	scanf("%d", &X);
	if(X%2==0){
		for(i=X+1;i<=X+11;i=i+2){
			printf("%d\n", i);
		}	
	}
	else if(X%2!=0){
		for(j=X;j<=X+10;j=j+2){
			printf("%d\n", i);
		
		}
	}
 
    return 0;
}