//Tipos de Triangulo
#include<stdio.h>
#include<math.h>

main(){
	double a, b ,c, x=0;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if(a<b){
		x=b;
		b=a;
		a=x;
	}
	if(b<c){ 
		x=c;
		c=b;
		b=x;
	}
	if(a<b){
		x=a;
		a=b;
		b=x;
		
	}
	
	
	if(a>=b+c){
		printf("NAO FORMA TRIANGULO\n");
	}
	else {
		
		if(pow(a,2)==pow(b,2)+pow(c,2)){
			printf("TRIANGULO RETANGULO\n");
		}
		else if(pow(a,2)>pow(b,2)+pow(c,2)){
			printf("TRIANGULO OBTUSANGULO\n");
		}
		else if(pow(a,2)<pow(b,2)+pow(c,2)){
			printf("TRIANGULO ACUTANGULO\n");
		}
			
		if(a==b && b==c){
			printf("TRIANGULO EQUILATERO\n");
		}
		else if(a==b || b==c || c==a){
			printf("TRIANGULO ISOSCELES\n");
		}
	
	
	}
	
	
}