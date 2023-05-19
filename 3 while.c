
#include <stdio.h>

int main() {
    int matricula, qtd_maior_mil = 0;
    float salario, maior_salario = 0;
    while (1) {

        printf("Insira a matricula do funcionario (ou -1 para sair): ");
        scanf("%d", &matricula);

        if (matricula == -1) {
            break;
        }

        printf("Insira o salario do funcionario: ");
        scanf("%f", &salario);

        if (salario > maior_salario) {
            maior_salario = salario;
        }

        if (salario > 1000) {
            qtd_maior_mil++;
        }
    }

    printf("\nMaior salário: R$%.2f\n", maior_salario);
    printf("Quantidade de pessoas que recebem mais que R$1.000,00: %d\n", qtd_maior_mil);

    return 0;
}
