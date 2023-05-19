#include<stdlib.h>
#include<stdio.h> 
int main(){
    float n1, n2;
    printf("insira o primeiro numero: "); 
    scanf("%f",&n1); 
    printf("insira a segundo numero: "); 
    scanf("%f",&n2);
    if(n1>n2){
               printf("Numero maior que %f\n", n1);
    }
    else{
        if(n2>n1){     
             printf("Numero menor que %f\n", n2);
        }
        else{
             printf("Os numeros são iguais\n");
        }
    }
    system("pause");
    return 0;
}
