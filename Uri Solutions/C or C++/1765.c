//Trapezio De Natal
#include <stdio.h>


int main(void){
	int cases,num;
	float b1, b2;
	
	while(scanf("%d", &num) && num!=0){
		int i=0;
		float candys[num];
		for(i; i<num;i++){
			scanf("%d %f %f", &cases, &b1 , &b2);
			candys[i]= cases*((b1+b2)*5)/2;
		}
		int j=0;
		for(j; j<num;j++){
			printf("Size #%d:\n", j+1);
			printf("Ice Cream Used: %.2f cm2\n", candys[j]);
		}
		printf("\n");
	}

}