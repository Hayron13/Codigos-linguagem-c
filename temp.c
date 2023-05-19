#include<stdlib.h>
#include<stdio.h>
int main(){
    float C, Fah;
    printf("insira a temperatura em celsius:");
    scanf("%f",&C);
    Fah=C*1.8+32;
    printf("A temperatura em graus Farenheit e %f", Fah);
    system("pause");
    return 0;
}
