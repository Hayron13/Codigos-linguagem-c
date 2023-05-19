#include <stdio.h>
#include <stdlib.h>
int main (){
    float N, somaN=0;
    for(i=1;i<=15;i++){
            printf("Digite o %d.o numero", i);
            scanf("%f", &N);
            somaN=somaN +N;
    }
    printf("O resultado da soma dos numeros e %f\n",somaN)
    return 0;
}
