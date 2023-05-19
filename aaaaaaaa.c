#include<stdio.h>
#include<locale.h>
int main(){
    float N;
    do{
        printf("Insira um número.\n Para finalizar, insira um valor menor ou igual a 1:");
        scanf("%f", &N);
    }
    while(N>1);
return 0;
}