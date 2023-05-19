/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num, dobro;
    
    printf(" Informe um Numero Interiro: ");
    scanf("%d", &num);
    
    dobro = num*2;
    
    printf("O dobro de %d e %d\n\n",num, dobro);
    
    return 0;
}
