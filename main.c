#include <stdio.h>

int main() {
    int h,pi,sex;
    printf("Insira sua altura: ");
    scanf("%d", &h);
    printf("Insira seu sexo (1 para masculino e 2 para feminino): ");
    scanf("%d", &sex);
    switch(pi) {
        case 1:
            pi=(72*h)-58;
            break;
        case 2:
            pi=(72*h)-58);
            break;
        default:
            printf("Valor inválido para o sexo.\n");
            return 0;
    }
    printf("O peso ideal para uma pessoa de %.2f metros de altura e sexo %d é de %.2f kg.\n", h,pi,sex);
    return 0;
}
