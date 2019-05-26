//Numeros Positivos
#include <stdio.h>
 
int main() {
 
    double a;
	int i=0, cont=0;
	for(i=0; i<6; i++){
		scanf("%lf", &a);
		if(a>0){
			cont++;		
		}
	}
	printf("%d valores positivos\n", cont);
 
    return 0;
}