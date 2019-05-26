//Conversão de Tempo
#include <stdio.h>
 
int main() {
 
    int seg, h, mim, seg2;
    
    scanf("%d", &seg);
    h=seg/3600;
    mim=(seg%3600)/60;
    seg2=seg%60;
    printf("%d:%d:%d\n",h,mim,seg2 );
 
    return 0;
}