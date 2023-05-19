#include <stdio.h>

int main(){
    int sex;
    float h, total_altura_feminino = 0, total_altura_masculino = 0, mediafem, mediagrupo, maioraltura = 0, menoraltura = 999;
    for(int i = 1; i <= 50; i++){
        printf("Insira a altura da pessoa em metros: ");
        scanf("%f", &h);
        printf("Insira o sexo da pessoa. 1 - homem\n2 - mulher\n");
        scanf("%d", &sex);
    
        if(h > maioraltura){
            maioraltura = h;
        }
        if(h < menoraltura){
            menoraltura = h;
        }
        if(sex == 1){
            total_altura_masculino = total_altura_masculino + h; 
        }
        if(sex == 2){
            total_altura_feminino = total_altura_feminino + h;
        }
    }
    mediafem = total_altura_feminino / 25;
    mediagrupo = (total_altura_feminino + total_altura_masculino) / 50;
    
    printf("\nA maior altura da turma é: %.2f metros\n", maioraltura);
    printf("A menor altura da turma é: %.2f metros\n", menoraltura);
    printf("A média de altura das mulheres é: %.2f metros\n", mediafem);
    printf("A média de altura do grupo é: %.2f metros\n", mediagrupo);
    return 0;
} 
