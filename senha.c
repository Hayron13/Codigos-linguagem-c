#include<stdio.h>
int main(){
    int password, cpass = 4321;
    do{
        printf("Insira a senha");
        scanf("%d", &password);
        if(password != cpass){
            printf("Senha errada\n");
        }
    }
    while(password != cpass);
    printf("Senha correta\n");
return 0;
}