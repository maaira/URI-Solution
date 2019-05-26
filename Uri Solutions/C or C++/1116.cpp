//Dividindo X por Y
#include <iostream>
 
using namespace std;
 
int main() {
 
    int entry;
    float a,b;
    scanf("%d", &entry);
    
    for(int i=0; i<entry; i++){
        scanf("%f %f", &a, &b);
        if(b==0){
            printf("divisao impossivel\n");
        }else{
            printf("%.1f\n", a/b);
        }
    }
 
    return 0;
}