#include<stdio.h> 
int main() {
    float h, b, area;
    printf("insira a altura do triangulo: "); 
    scanf("%f",&h); 
    printf("insira a base do triangulo: "); 
    scanf("%f",&b); 
    area=(h+b)/2; 
    printf("A area do triangulo eh %f\n",area); 
    return 0;
    }