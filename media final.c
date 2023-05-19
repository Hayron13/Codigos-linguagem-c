#include <stdio.h>

int main(){
    float n1, n2, mf;
    
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);    
    
    mf = (n1+n2)/2;
    
    printf("A media final e %f\n", mf);
    
    return 0;
}
