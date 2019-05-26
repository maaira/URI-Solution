//Pares, Ímpares, Positivos e Negativos
#include <stdio.h>
 
int main() {
 
    int a=0, i=0;
	int positivo=0, negativo=0, par=0,impar=0;
	
	for(i=0;i<5;i++){
		scanf("%d", &a);
		if(a>0){positivo++;}
		if(a%2==0){par++;}
		if(a<0){negativo++;}
		if(a%2!=0){impar++;}
	
	}
	printf("%d valor(es) par(es)\n", par);	
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
 
    return 0;
}