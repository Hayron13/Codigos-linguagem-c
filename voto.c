#include<stdlib.h>
#include<stdio.h>
int main(){
    int years;
    printf("insira sua idade:");
    scanf("%d", &years);
    if(years>=16){
       printf("Pode votar\n",years);
       }
    else{
         printf("Nao pode votar\n",years);
         }
    system("pause");
    return 0;
}
