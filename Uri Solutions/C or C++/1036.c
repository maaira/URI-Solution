//Formula de Bhaskara
#include <stdio.h>
#include<math.h>
int main() {
 
    double delta, r1, r2, a,b,c;
    scanf(" %lf %lf %lf", &a, &b, &c);
    delta=(b*b)-(4*a*c);
    if(a==0 || delta<0){
    	printf("Impossivel calcular\n");
	}else{
		r1=(-b+sqrt(delta))/(2*a);
    	r2=(-b-sqrt(delta))/(2*a);
    	printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
	}
 
    return 0;
}