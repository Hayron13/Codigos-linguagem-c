#include<stdio.h> 
int main() {
    float cmensal, kwh, final;
    kwh=0.95;
    printf("insira o valor consumo mensal: "); 
    scanf("%f",&cmensal); 
    final=kwh*cmensal; 
    printf("o valor a pagar no final do mes eh de %f\n",final); 
    return 0;
    }