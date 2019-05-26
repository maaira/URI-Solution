//Decoração Natalina
#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846

int main(void){
	double angulo, altura_elfo, cateto_adjacente, altura_arv;
	while(scanf("%lf %lf %lf", &angulo, &cateto_adjacente, &altura_elfo)!= EOF){
		altura_arv = (tan(angulo*PI/180.0)*cateto_adjacente) + altura_elfo;
		printf("%.2lf\n", altura_arv*5);
	}
	
	return 0;
	

}