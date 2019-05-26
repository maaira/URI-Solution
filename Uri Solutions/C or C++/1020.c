//Idade me Dias
#include <stdio.h>
 
int main() {
 
    int idade, anos, mes ,dias;
    
    scanf("%d", &idade);
    anos=idade/365;
    mes=idade%365/30;
    dias=idade%365%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, mes, dias);
 
    return 0;
}