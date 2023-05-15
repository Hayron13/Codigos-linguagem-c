#include<stdio.h>
int main(){   
    int op;
    float n1, n2,rp;
    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Digite o primeiro numero: ");
    scanf("%f",&n2);
    printf("Qual a operacao que deseja realizar:\n 1-adicao\n 2-subtracao\n 3-multipicacao\n 4-divisao");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        rp = n1+n2;
        printf("O resultado e: %.2f", rp);
        break;

    case 2: 
        rp = n1-n2;
        printf("O resultado e: %.2f", rp);
        break;

    case 3: 
        rp = n1*n2;
        printf("O resultado e: %.2f", rp);
        break;
   
    case 4:
        rp = n1/n2;
        printf("O resultado e: %.2f", rp);
        break;

    default:        
        printf("Tipo de operação inválida");
        break;
    }
    return 0;
}