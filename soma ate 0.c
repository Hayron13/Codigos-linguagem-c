#include<stdio.h>
int main(){
    int Num;
    int soma = 0;
    do{
        printf("Insira um numero.\n Para finalizar, insira um valor menor ou igual a 1:");
        scanf("%d", &Num);
        soma = soma + Num;
    }
    while(Num>0);
    printf("O resultado e %d\n", soma);
return 0;
}