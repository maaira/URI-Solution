//Guarda Costeira
#include <iostream>
#include <math.h>
using namespace std;
 
int main(){
	double d, vf, vg;
	/*
        d = distancia entre o ladrão e a guarda
        vf = velocidade do ladrão
        vg = velocidade da guarda
        Obs: o ladrão faz um movimento perperndicular ate a fronteira(hipotenusa) partindo da costa(cateto) e guarda 
        segue em linha reta a parti da costa(cateto) formando um angulo de 90 graus
    */
	while(scanf("%lf %lf %lf", &d, &vf, &vg) != EOF){
		double dist = sqrt(144 + d*d);//descobri a distancia percorrida pelo ladrão
		double tf = 12 / vf;
		double tg = dist / vg;
		if(tg <= tf)printf("S\n");
		else printf("N\n");
		
	}
	return 0;
}
