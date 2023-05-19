#include<stdlib.h>
#include<stdio.h>
int main(){
    float Co, val, kwh=0.95;
    printf("insira o consumo mensal de energia:");
    scanf("%f",&Co);
    val=Co*kwh;
    printf("O valor final a pagar e de %.2f\n");
    system("pause");
    return 0;
}
