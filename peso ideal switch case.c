#include <stdio.h>

int main() {
    float h ,pi;
    int sex;
    printf("Insira sua altura: ");
    scanf("%f", &h);
    printf("Insira seu sexo (1 para masculino e 2 para feminino): ");
    scanf("%d", &sex);
    switch (sex) {
        case 1:
            pi = (72.7 * h) - 58;
            break;
        case 2:
            pi = (62.1 * h) - 44.7;
            break;
        default:
            printf("Valor inválido para o sexo.\n");
            return 0;
    }
    printf("O peso ideal para uma pessoa de %.2f metros de altura e sexo %d é de %.2f kg.\n", h, sex, pi);

    return 0;
}
