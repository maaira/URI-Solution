//Media 3
#include <stdio.h>
 
int main() {
 
    float n1, n2, n3 ,n4;
	float med, exam;
	
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4 );
	med=(n1*2+n2*3+n3*4+n4)/10;
	if(med<5){
		printf("Media: %.1f\nAluno reprovado.\n", med);
	}
	else if(med>=7){
		printf("Media: %.1f\nAluno aprovado.\n", med);
	}
	
	else {
		printf("Media: %.1f\nAluno em exame.\n", med);
		scanf("%f", &exam);
		printf("Nota do exame: %.1f\n",exam );
		if((exam+med)/2>=5){
			printf("Aluno aprovado.\nMedia final: %.1f\n",  (exam+med)/2);
		}
		else{
			printf("Aluno reprovado.\nMedia final: %.1f\n", (exam+med)/2 );
		}
		}
	
}