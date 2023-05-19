#include<stdlib.h>
#include<stdio.h>
int main(){
    int sex;
    float h,p;
    printf("insira sua altura:");
    scanf("%f", &h);
    printf("insira seu sexo:1-homen ou 2-mulher:");
    scanf("%d", &sex);
    if(sex==1){
       p=72.7*h-58;
       printf("O peso ideal e %f Kg\n",p);
       }
    else{
         p=62.1*h-44.7;
         printf("O peso ideal e %f Kg\n",p);
         }
    system("pause");
    return 0;
}
