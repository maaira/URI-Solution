//Gasto de Combustivel
#include <stdio.h>
 
int main() {
 
   int kh,h;
	float km, l;
	scanf(" %d \n %d",&h, &kh);
	km=kh*h;
	l=km/12;
	printf("%.3f\n", l );
 
    return 0;
}