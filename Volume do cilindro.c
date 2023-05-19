#include<stdio.h> 
int main() {
    float pi, h, r, vol;
    pi=3,1415;
    printf("insira o valor de raio: "); 
    scanf("%f",&r); 
    printf("insira a altura: "); 
    scanf("%f",&h); 
    vol=r*h; 
    printf("o volume do cilinro é %f\n",vol); 
    return 0;
    }