#include<stdio.h> 
int main() {
    float real, doll, final;
    printf("insira a contacao do dolar: "); 
    scanf("%f",&doll); 
    printf("insira o valor em reais que deseja converter: "); 
    scanf("%f",&real); 
    final=real/doll; 
    printf("acovercao do valor em reais em dolar eh %f\n",final); 
    return 0;
    }