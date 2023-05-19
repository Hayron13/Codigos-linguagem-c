#include<stdio.h> 
int main() {
    float n1, n2, mf;
    printf("insira a primeira nota: "); 
    scanf("%f",&n1); 
    printf("insira a segunda nota: "); 
    scanf("%f",&n2); 
    mf=(n1+n2)/2; 
    printf("A media final eh %f\n",mf); 
    return 0;
    }