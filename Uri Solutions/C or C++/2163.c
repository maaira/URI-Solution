//O Despertar da Força
#include <stdio.h>

int main() {
 
    int x=0,y=0;
	int i, j;
	int m=0,n=0;
	scanf("%d %d", &x, &y);
	
	int matriz[x][y];
	
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	

	
	for(i=0; i<x; i++){
		for(j=0; j<y; j++){
			if(matriz[i][j]==42 && matriz[i-1][j]==7 && matriz[i+1][j]==7 && matriz[i][j-1]==7 && matriz[i][j+1]==7 && matriz[i-1][j-1]==7 && matriz[i+1][j-1]==7 && matriz[i-1][j+1]==7 && matriz[i+1][j+1]==7){
				
				m=i+1;
				n=j+1;
			}
		}
	}
	printf("%d %d\n",m, n);
 
    return 0;
}