#include<stdio.h> 
int main(){
    int mat=20230211;
    float n1, n2, mf;
    printf("insira a primeira nota: "); 
    scanf("%f",&n1); 
    printf("insira a segunda nota: "); 
    scanf("%f",&n2); 
    mf=(n1+n2)/2; 
    printf("A media final e %f\n",mf);
        if(mf>6){
       printf("voce foi aprovado \n",mf);
       }
    else{
         printf("voce foi reprovado\n",mf);
         }
    system("pause");
    return 0;
    }
